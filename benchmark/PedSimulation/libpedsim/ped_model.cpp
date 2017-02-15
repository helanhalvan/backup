//
// pedsim - A microscopic pedestrian simulation system.
// Copyright (c) 2003 - 2014 by Christian Gloor
//
//
// Adapted for Low Level Parallel Programming 2015
//
#include "ped_model.h"
#include "ped_waypoint.h"
#include "cuda_dummy.h"
#include "ped_model.h"
#include <stdio.h>
#include <iostream>
#include <stack>
#include <algorithm>
#include <assert.h>
#include <thread>
#include <omp.h>
#include <xmmintrin.h>

#include <chrono>

#include <atomic>

atomic_int Ped::Region::index(0);


void Ped::Region::reset(){

  mergeWeight = MERGEWEIGHT;


  used = true;
  split = false;
  new_region = false;

  oldSelf.x = 0;
  oldSelf.y = 0;
  oldSelf.width = 0;
  oldSelf.height = 0;

  regionPosition.x = 0;
  regionPosition.y = 0;
  regionPosition.width = 0;
  regionPosition.height = 0;
  splitData.parent = NULL;

  int size;

  size = splitData.children.size();
  if (size > 0){
    printf("not empty children size\n");
  }

  size = internal_agents.size();
  if (size > 0){
    printf("not empty internal_agents size\n");
  }

}

void Ped::Region::mergeSizes(Region* region){

  int child_x = region->regionPosition.x;
  int child_y = region->regionPosition.y;

  if (child_x == regionPosition.x){
    if (!(child_y > regionPosition.y)){
      printf("same X but child is above.. WTF\n");
    }
    regionPosition.height = regionPosition.height*2;
  }else{
    if (!(child_x > regionPosition.x)){
      printf("same Y but child is not to the right.. WTF\n");
    }
    regionPosition.width = regionPosition.width*2;
  }
}

bool in_region(struct Ped::Region::regionPosition regionPosition, int x, int y){
  bool in_region = (
      (x >= regionPosition.x) &&
      (x < (regionPosition.x + regionPosition.width)) &&
      (y >= regionPosition.y) &&
      (y < (regionPosition.y + regionPosition.height)));

  return in_region;

}

void Ped::Region::splitRegion(Region *r){
  //Region *r;
   int divresult;

  //store old self size for use once in move
  oldSelf = regionPosition;

  if (regionPosition.height >= regionPosition.width){

    divresult = regionPosition.height / 2;

        r->regionPosition.x = regionPosition.x;
        r->regionPosition.y = regionPosition.y + divresult;
        r->regionPosition.width  = regionPosition.width;
        r->regionPosition.height = divresult;

    this->regionPosition.height = divresult;

  }else {

    divresult = regionPosition.width/2;

    r->regionPosition.x = regionPosition.x + divresult;
    r->regionPosition.y = regionPosition.y;
    r->regionPosition.width  =  divresult;
    r->regionPosition.height = regionPosition.height;

    this->regionPosition.width = divresult;
  }


  r->splitData.parent = this;

  splitData.children.push_back(r);
}

bool Ped::Region::merge(){

  //There is a no children further children that must merge before
  int size = splitData.children.size();
  if (size == 0){

    Region *parent = splitData.parent;

    if (parent != NULL && parent->splitData.children.back() == this){
      while(internal_agents.size() > 0){
        Tagent* agent = internal_agents.back();
        //transfer all agents to parent
        parent->internal_agents.push_back(agent);
        internal_agents.pop_back();
      }



      parent->mergeSizes(this);
      parent->splitData.children.pop_back();
      parent->mergeWeight = MERGEWEIGHT;

      return true;

    }
  }

  return false;
}


void Ped::Model::close() {
}

void Ped::Model::allocateVectors(size_t size) {
  vector.position.x    = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.position.y    = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.desired.x     = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.desired.y     = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.destination.x = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.destination.y = (float*)_mm_malloc(size * sizeof(float), 16);
  vector.destination.r = (float*)_mm_malloc(size * sizeof(float), 16);
}


void Ped::Model::computeNextDesiredPosition_opencl(){

  int num_agents = agents.size();
  bool reached_destination[num_agents];

  desired_opencl(reached_destination);

#pragma omp parallel for schedule(static)
  for (int i = 0; i < num_agents; ++i){
    if (reached_destination[i]){

      agents[i]->waypoints.push_back(agents[i]->destination);
      agents[i]->destination = agents[i]->waypoints.front();
      agents[i]->waypoints.pop_front();

      vector.destination.x[i] = agents[i]->destination->getx();
      vector.destination.y[i] = agents[i]->destination->gety();
      vector.destination.r[i] = agents[i]->destination->getr();
    }
  }
}


void Ped::Model::pushToRegion(unsigned int region_index, Ped::Tagent* agent, bool useStack){

  for (std::vector<Region*>::iterator it = regions.begin(); it != regions.end(); ++it){

    if ((*it)->_index == region_index){
      //do not put into same region.
      continue;
    }

    int x = agent->getX();
    int y = agent->getY();

    Region* region = (*it);

    bool inRegion = in_region(region->regionPosition, x, y);
    if (inRegion) {
      if (useStack) {
        if (_color_mode == REGION) {
          agent->_region_index = (*it)->_index;
          agent->_update_color = true;
        } else if (_color_mode == CROSS) {
          agent->_region_index++;
          agent->_update_color = true;
        }
        (*it)->agentStack.push(agent);
      } else {
        (*it)->internal_agents.push_back(agent);
      }
      return;
    }
  }
  printf("couldnt find any region = BAAAAAD\n");
  std::this_thread::sleep_for (std::chrono::milliseconds(900));
}


void Ped::Model::setup(std::vector<Ped::Tagent*> agentsInScenario, IMPLEMENTATION impl, unsigned int nthreads, HEATMAP_MODE mode_for_heatmap)
{
  heatmap_mode = mode_for_heatmap;
  implementation = impl;
  num_threads = nthreads;
  agents = std::vector<Ped::Tagent*>(agentsInScenario.begin(), agentsInScenario.end());

  size_t num_agents = agents.size();

  allocateVectors(num_agents);

  if (implementation == COLLISION_PARALLEL) {

    //normalize to actual grid size by division of 5

    for(int i = 0; i < SCENARIOWIDTH; ++i){
      for(int j = 0; j < SCENARIOHEIGHT; ++j){
        grid[j][i] = false;
      }
    }

    //initialize regions
    for (int i = 0; i < MAX_REGIONS; ++i) {
      unusedRegions.push_back(new Region());
    }

    //region gotta be a multiple of 2
    regions.push_back(new Ped::Region((struct Region::regionPosition) {
          .x      = -64,
          .y      = -64,
          .width  = 256,
          .height = 256}));

    for (size_t i = 0; i < num_agents; ++i) {
      pushToRegion(MAX_REGIONS+50, agents[i], false);
    }
  }


  for (size_t i = 0; i < num_agents; ++i) {
    agents[i]->bindData(&vector.position.x[i],
        &vector.position.y[i],
        &vector.desired.x[i],
        &vector.desired.y[i],
        &vector.destination.x[i],
        &vector.destination.y[i],
        &vector.destination.r[i]);
  }

  treehash = new std::map<const Ped::Tagent*, Ped::Ttree*>();

  // Create a new quadtree containing all agents
  tree = new Ttree(NULL, treehash, 0, treeDepth, 0, 0, 1000, 800);
  for (std::vector<Ped::Tagent*>::iterator it = agents.begin(); it != agents.end(); ++it){
    tree->addAgent(*it);
  }


  if (implementation == OMP || implementation == COLLISION_PARALLEL) {
    omp_set_num_threads(num_threads);
  }

  // Set up heatmap (relevant for Assignment 4)
  setup_heatmap();

  init_opencl();
}


void Ped::Model::tick() {
  //static int tick_count = 0;

  //tick_count++;
  //if (tick_count % 100 == 0) {
    //printf("tick #%d\n", tick_count);
  //}

#ifdef TIME_TICK
  std::chrono::time_point<std::chrono::system_clock> start, stop;
  start = std::chrono::system_clock::now();
#endif

  switch(implementation) {
    case SEQ: tick_seq(); break;
    case OMP: tick_omp(); break;
    case PTHREAD: tick_pthread(); break;
    case VECTOR: printf("VECTOR\n"); tick_vector(); break;
    case TICK_OPENCL: tick_opencl(); break;
    case COLLISION_SEQ: tick_collision_seq(); break;
    case COLLISION_PARALLEL: tick_collision_parallel(); break;
    default: assert(!"Implementation Missing!"); break;
  }
  if (heatmap_mode == OPENCL) {
    wait_for_opencl_to_finish();
  }

#ifdef TIME_TICK
  stop = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed = stop - start;
  cout << "Time for this tick: " << elapsed.count() << endl;
#endif
}


void Ped::Model::tick_collision_seq() {
  const int num_agents = agents.size();
  for (int i = 0; i < num_agents; ++i ) {
    agents[i]->computeNextDesiredPosition();
  }
  if (heatmap_mode != DISABLED) {
    compute_heatmap();
  }
  for (int i = 0; i < num_agents; ++i ) {
    move_seq(agents[i]);
  }
  //cout << "Total amount of agents: " << tree->getAgents().size() << endl;
}

void Ped::Model::tick_collision_parallel() {

  size_t regionSize = regions.size();

  for (size_t i = 0; i < regionSize; ++i ){
    //add agents that changed region
    regions[i]->add_agents_from_stack();
  }

  //split loop
  for (size_t i = 0; i < regions.size(); ++i ){

    int num_agents = regions[i]->internal_agents.size();
    int size = unusedRegions.size();

    if (num_agents > 20 && size > 0){
      if (max(regions[i]->regionPosition.height, regions[i]->regionPosition.width) > 30){

        Region *r = unusedRegions.back();
        r->reset();
        unusedRegions.pop_back();

        regions[i]->splitRegion(r);

        r->new_region = true;
        regions[i]->split = true;

        regionStack.push(r);
        paintRegionStack.push(r);
      }
    }
  }



  //merge loop
  for (size_t i = 0; i < regions.size() ; ++i ){
    int num_agents = (regions[i])->internal_agents.size();

    if (num_agents < 10 ){

      if (regions[i]->mergeWeight < 0){
        if (regions[i]->merge()){
          regions[i]->reset();
          unusedRegions.push_back(regions[i]);
          regions[i] = regions.back();
          regions.pop_back();
        }
      } else {
        regions[i]->mergeWeight--;
      }
    }
  }
    //pushing all new regions into region vector so other regions can push to them
  add_regions_from_stack();


  const int num_agents = agents.size();
  for (int i = 0; i < num_agents; ++i ) {
    agents[i]->computeNextDesiredPosition();
  }

  if (heatmap_mode != DISABLED) {
    compute_heatmap();
  }

#pragma omp parallel for schedule(dynamic)
    //use old regionSize to not tick splitted regions
  for (size_t i = 0; i < regions.size(); ++i ){

    //dont tick just splitted region or else they might tick their agents twice
    if (regions[i]->new_region == true){
      regions[i]->new_region = false;
      continue;
    }

    int num_agents = (regions[i])->internal_agents.size();

    for (int j = 0; j < num_agents; ++j ) {
      Tagent *agent = regions[i]->internal_agents[j];

      //agent->computeNextDesiredPosition();

      MOVE_ACTION move_action = move(agent, regions[i]);

      if (move_action != INSIDE_CURRENT_REGION){

         //move to new spltted region
        if (move_action == TO_NEW_REGION){

         Region* r = regions[i]->splitData.children.back();
         r->internal_agents.push_back(regions[i]->internal_agents[j]);

        }else /*TO_EXISTING_REGION*/ {
          pushToRegion(regions[i]->_index, regions[i]->internal_agents[j], true);
        }
        regions[i]->internal_agents[j] = regions[i]->internal_agents.back();
        regions[i]->internal_agents.pop_back();
        num_agents -= 1;
        --j;
      }
    }
    regions[i]->split = false;
  }

}




void Ped::Model::tick_seq() {
  const int num_agents = agents.size();
  for (int i = 0; i < num_agents; ++i ) {
    agents[i]->move();
  }
}


void Ped::Model::tick_omp() {
  const int num_agents = agents.size();
#pragma omp parallel for
  for (int i = 0; i < num_agents; ++i ) {
    agents[i]->move();
  }
}

void thread_worker_function(int id, int num_threads, std::vector<Ped::Tagent*> agents) {
  const unsigned int num_agents = agents.size();
  for (int i = id; i < num_agents; i += num_threads) {
    agents[i]->move();
  }
}

void Ped::Model::tick_pthread() {
  const int num_agents = agents.size();
  std::thread threads[num_threads];

  for (int i = 0; i < num_threads; ++i) {
    threads[i] = std::thread(thread_worker_function, i, num_threads, agents);
  }

  for (int i = 0; i < num_threads; ++i) {
    threads[i].join();
  }
}

void Ped::Model::tick_vector() {
  __m128 px, py, tx, ty, tr, dx, dy, half, length;

  float i = 0.5f;
  half = _mm_load1_ps(&i);

  const int num_agents = agents.size();
  for (int i = 0; i < num_agents; i += 4 ) {

    tx = _mm_load_ps(&vector.destination.x[i]);
    ty = _mm_load_ps(&vector.destination.y[i]);

    px = _mm_load_ps(&vector.position.x[i]);
    py = _mm_load_ps(&vector.position.y[i]);

    //diff x & y
    dx = _mm_sub_ps(tx, px);
    dy = _mm_sub_ps(ty, py);

    tx = _mm_mul_ps(dx, dx);
    ty = _mm_mul_ps(dy, dy);

    length = _mm_add_ps(tx, ty);
    length = _mm_sqrt_ps(length);

    tx = _mm_div_ps(dx, length);
    ty = _mm_div_ps(dy, length);

    //new desired x & y
    px = _mm_add_ps(px, tx);
    py = _mm_add_ps(py, ty);

    px = _mm_add_ps(px, half);
    py = _mm_add_ps(py, half);

    _mm_store_ps(&vector.desired.x[i], px);
    _mm_store_ps(&vector.desired.y[i], py);

    _mm_store_ps(&vector.position.x[i], px);
    _mm_store_ps(&vector.position.y[i], py);

    tr = _mm_load_ps(&vector.destination.r[i]);

    px = _mm_cmplt_ps(length, tr);

    for(int j = 0; j < 4; ++j){

      vector.position.x[i+j] = (int)vector.position.x[i+j];
      vector.position.y[i+j] = (int)vector.position.y[i+j];

      if (px[j]){
        agents[i+j]->waypoints.push_back(agents[i+j]->destination);
        agents[i+j]->destination = agents[i+j]->waypoints.front();
        agents[i+j]->waypoints.pop_front();

        vector.destination.x[i+j] = agents[i+j]->destination->getx();
        vector.destination.y[i+j] = agents[i+j]->destination->gety();
        vector.destination.r[i+j] = agents[i+j]->destination->getr();
      }
    }
  }
}

void Ped::Model::tick_opencl() {
  const int num_agents = agents.size();
  computeNextDesiredPosition_opencl();

//#pragma omp parallel for
//  for (int i = 0; i < num_agents; ++i ) {
//  agents[i]->setX(agents[i]->getDesiredX());
//  agents[i]->setY(agents[i]->getDesiredY());
//  }
}

////////////
/// Everything below here relevant for Assignment 3.
/// Don't use this for Assignment 1!
///////////////////////////////////////////////
Ped::MOVE_ACTION Ped::Model::move(Tagent* agent, Region *region){

  struct pos {
    int x, y;
  };
  pos *prioritized_alternatives[4];
  pos p1, p2, back;
  pos desired;
  // Compute the three alternative positions that would bring the agent
  // closer to his desiredPosition, starting with the desiredPosition itself
  desired.x = agent->getDesiredX();
  desired.y =  agent->getDesiredY();

  prioritized_alternatives[0] = &desired;

  int diffX = desired.x - agent->getX();
  int diffY = desired.y - agent->getY();

  if (diffX == 0 || diffY == 0) {
    // Agent wants to walk diagonally
    p1.x = desired.x + diffY;
    p1.y = desired.y + diffX;

    p2.x = desired.x - diffY;
    p2.y = desired.y - diffX;
  }
  else {
    // Agent wants to walk straight to North, South, West or East
    p1.x = desired.x;
    p1.y = agent->getY();

    p2.x = agent->getX();
    p2.y = desired.y;
  }
//Agent moving further per step then it should test
/*
    if(p1.x>(agent->getX()+1) || p1.y<(agent->getY()-1) || p1.x>(agent->getX()+1) || p1.y<(agent->getY()-1) ||
       p2.x>(agent->getX()+1) || p2.y<(agent->getY()-1) || p2.x>(agent->getX()+1) || p2.y<(agent->getY()-1) )
    {
        cout << "agent out of line\n" << endl;
    }
*/
  if(rand()%2){
    prioritized_alternatives[1] = &p1;
    prioritized_alternatives[2] = &p2;
  } else {
    prioritized_alternatives[1] = &p2;
    prioritized_alternatives[2] = &p1;
  }

  back.x = agent->getX() - diffY;
  back.y = agent->getY() - diffX;
  prioritized_alternatives[3] = &back;

  pos *p;
  for (int n = 0; n < 4; ++n) {
    p = prioritized_alternatives[n];

    struct Ped::Region::regionPosition maxSize;

    if (region->split){
      maxSize = region->oldSelf;
    }else{
      maxSize = region->regionPosition;
    }


    if (atEdge(region->regionPosition, p->x, p->y)) {
      // trying to move to last spot in current region

      if (region->split && !in_region(region->regionPosition, p->x, p->y)){
        //to new splitted region
        return TO_NEW_REGION;
      }else {
        if (moveAgentCAS(p->x, p->y, agent)) {
          return INSIDE_CURRENT_REGION;
        }
      }
  } else if (!in_region(maxSize, p->x, p->y)){
    //trying to move to new region
    if (moveAgentCAS(p->x, p->y, agent)) {
      return TO_EXISTING_REGION;
    }
  } else {
    // If the current position is not yet taken by any neighbor
    if (!grid[p->y+50][p->x+50]) {

      // Leaving CAS position in region
      grid[(int)agent->getY()+50][(int)agent->getX()+50] = false;
      grid[p->y+50][p->x+50] = true ;

      // Set the agent's position
      agent->setX(p->x);
      agent->setY(p->y);

      if (region->split && !in_region(region->regionPosition, p->x, p->y)){
        return TO_NEW_REGION;
      }else {
        return INSIDE_CURRENT_REGION;
      }
    }
  }
}

return INSIDE_CURRENT_REGION;
}




void Ped::Model::move_seq( Ped::Tagent *agent)
{
  // Search for neighboring agents
  set<const Ped::Tagent *> neighbors = getNeighbors(agent->getX(), agent->getY(), 2);

  // Retrieve their positions
  std::vector<std::pair<int, int> > takenPositions;
  for (std::set<const Ped::Tagent*>::iterator neighborIt = neighbors.begin(); neighborIt != neighbors.end(); ++neighborIt) {
    std::pair<int,int> position((*neighborIt)->getX(), (*neighborIt)->getY());
    takenPositions.push_back(position);
  }

  // Compute the three alternative positions that would bring the agent
  // closer to his desiredPosition, starting with the desiredPosition itself
  std::vector<std::pair<int, int> > prioritizedAlternatives;
  std::pair<int, int> pDesired(agent->getDesiredX(), agent->getDesiredY());
  prioritizedAlternatives.push_back(pDesired);

  int diffX = pDesired.first - agent->getX();
  int diffY = pDesired.second - agent->getY();
  std::pair<int, int> p1, p2;
  if (diffX == 0 || diffY == 0)
  {
    // Agent wants to walk straight to North, South, West or East
    p1 = std::make_pair(pDesired.first + diffY, pDesired.second + diffX);
    p2 = std::make_pair(pDesired.first - diffY, pDesired.second - diffX);
  }
  else {
    // Agent wants to walk diagonally
    p1 = std::make_pair(pDesired.first, agent->getY());
    p2 = std::make_pair(agent->getX(), pDesired.second);
  }

  if (rand()%2) {
    prioritizedAlternatives.push_back(p1);
    prioritizedAlternatives.push_back(p2);
  } else {
    prioritizedAlternatives.push_back(p2);
    prioritizedAlternatives.push_back(p1);
  }
  prioritizedAlternatives.push_back(std::make_pair(agent->getX() - diffY, agent->getY() - diffX));

  // Find the first empty alternative position
  for (std::vector<pair<int, int> >::iterator it = prioritizedAlternatives.begin(); it != prioritizedAlternatives.end(); ++it) {

    // If the current position is not yet taken by any neighbor
    if (std::find(takenPositions.begin(), takenPositions.end(), *it) == takenPositions.end()) {

      // Set the agent's position
      agent->setX((*it).first);
      agent->setY((*it).second);

      // Update the quadtree
      (*treehash)[agent]->moveAgent(agent);
      break;
    }
  }
}

void Ped::Model::compute_heatmap() {
  if (heatmap_mode == NAIVE) {
    update_heatmap_seq();
  } else if (heatmap_mode == OPENCL) {
    update_heatmap_opencl();
  }
}

bool Ped::Model::atEdge(struct Ped::Region::regionPosition regionPosition, int x, int y){
  int leftEdge = regionPosition.x                  ;
  int rightEdge = regionPosition.width + leftEdge  ;

  int topEdge = regionPosition.y                   ;
  int bottomEdge = regionPosition.height + topEdge ;

bool in_region = (
      (x >= regionPosition.x) &&
      (x < (regionPosition.x + regionPosition.width)) &&
      (y >= regionPosition.y) &&
      (y < (regionPosition.y + regionPosition.height)));

   return in_region && (x == leftEdge || x == rightEdge ||
      y == topEdge  || y == bottomEdge);
}



bool Ped::Model::moveAgentCAS(int x, int y, Tagent* agent){

  if (!grid[y+50][x+50].exchange(true)){

    int oldX = agent->getX();
    int oldY = agent->getY();

    agent->setX(x);
    agent->setY(y);

    grid[oldY+50][oldX+50] = false;

    return true;
  }
  return false;
}

/// Returns the list of neighbors within dist of the point x/y. This
/// can be the position of an agent, but it is not limited to this.
/// \date    2012-01-29
/// \return  The list of neighbors
/// \param   x the x coordinate
/// \param   y the y coordinate
/// \param   dist the distance around x/y that will be searched for agents (search field is a square in the current implementation)
set<const Ped::Tagent*> Ped::Model::getNeighbors(int x, int y, int dist) const {
  // if there is no tree, return all agents
  if(tree == NULL)
    return set<const Ped::Tagent*>(agents.begin(), agents.end());

  // create the output list
  list<const Ped::Tagent*> neighborList;
  getNeighbors(neighborList, x, y, dist);

  // copy the neighbors to a set
  return set<const Ped::Tagent*>(neighborList.begin(), neighborList.end());
}

/// Populates the list of neighbors that can be found around x/y./// This triggers a cleanup of the tree structure. Unused leaf nodes are collected in order to
/// save memory. Ideally cleanup() is called every second, or about every 20 timestep.
/// \date    2012-01-28
void Ped::Model::cleanup() {
  if(tree != NULL)
    tree->cut();
}

/// \date    2012-01-29
/// \param   the list to populate
/// \param   x the x coordinate
/// \param   y the y coordinate
/// \param   dist the distance around x/y that will be searched for agents (search field is a square in the current implementation)
void Ped::Model::getNeighbors(list<const Ped::Tagent*>& neighborList, int x, int y, int dist) const {
  std::stack<Ped::Ttree*> treestack;

  treestack.push(tree);
  while(!treestack.empty()) {
    Ped::Ttree *t = treestack.top();
    treestack.pop();
    if (t->isleaf) {
      t->getAgents(neighborList);
    }
    else {
      if (t->tree1->intersects(x, y, dist)) treestack.push(t->tree1);
      if (t->tree2->intersects(x, y, dist)) treestack.push(t->tree2);
      if (t->tree3->intersects(x, y, dist)) treestack.push(t->tree3);
      if (t->tree4->intersects(x, y, dist)) treestack.push(t->tree4);
    }
  }
}

Ped::Model::~Model()
{
  kill_opencl();
  if(tree != NULL)
  {
    delete tree;
    tree = NULL;
  }
  if(treehash != NULL)
  {
    delete treehash;
    treehash = NULL;
  }
}
