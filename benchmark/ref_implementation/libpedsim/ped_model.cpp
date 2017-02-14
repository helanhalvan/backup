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
#include <iostream>
#include <stack>
#include <algorithm>
#include <unistd.h>
#include <climits>
#include <omp.h>
#include <ctime>

#define THREADS 4
#define MEAN_DIVIDER 4

void Ped::Model::setup(std::vector<Ped::Tagent*> agentsInScenario)
{

  omp_set_num_threads(THREADS);

  agents = std::vector<Ped::Tagent*>(agentsInScenario.begin(), agentsInScenario.end());
  treehash = new std::map<const Ped::Tagent*, Ped::Ttree*>();

  // Create a new quadtree containing all agents
  tree = new Ttree(NULL, treehash, 0, treeDepth, 0, 0, 1000, 800);
  for (std::vector<Ped::Tagent*>::iterator it = agents.begin(); it != agents.end(); ++it)
  {
    tree->addAgent(*it);
  }

  // This is the sequential implementation
  implementation = SEQ;

  // Set up heatmap (relevant for Assignment 4)
  setupHeatmapSeq();

  tick_num=0;
}

void Ped::Model::tick()
{


  #pragma omp parallel for
  for(int i = 0; i < (int) agents.size(); i++) {
    agents[i]->computeNextDesiredPosition();
  }

  //printf("tick: %d\n", tick_num++);

  move();
  //move(agents[i]);

  tick_num++;
}

bool Ped::Model::compare (std::pair<Ped::Ttree*,int> one, std::pair<Ped::Ttree*,int> two) {
    return (one.second < two.second);
}

void Ped::Model::loadBalancing(int num_threads, std::vector<Ped::Ttree*> *work_load) {

    int mean_agents_per_thread = tree->getNumAgents() / num_threads;
    int atomic_agents_per_tree = mean_agents_per_thread / MEAN_DIVIDER;

    std::stack<Ped::Ttree*> tree_stack;
    std::vector<std::pair<Ped::Ttree*, int> > trees;

    // push tree to stack
    tree_stack.push(tree);

    Ped::Ttree* tmp_tree;

    while(!tree_stack.empty()) {
        tmp_tree = tree_stack.top();
        tree_stack.pop();

        int num_agents = tmp_tree->getNumAgents();

        // if the tree is a leaf it cannot be splitted
        if(tmp_tree->isleaf) {

            // if the number of agents in as subtree is 0 the subtree must not be processed by a thread
            if(num_agents != 0) {
                trees.push_back(std::make_pair(tmp_tree, num_agents));
            }
        }

        // split the tree into its four subtrees if the tree contains more agents than atomic_agents_per_tree
        else if(num_agents > atomic_agents_per_tree) {
            tree_stack.push(tmp_tree->getSubtree(0));
            tree_stack.push(tmp_tree->getSubtree(1));
            tree_stack.push(tmp_tree->getSubtree(2));
            tree_stack.push(tmp_tree->getSubtree(3));
        }

        // if the number of agents in a subtree is smaller than atomic_agents_per_tree
        else {
            if(num_agents != 0) {
                trees.push_back(std::make_pair(tmp_tree, num_agents));
            }
        }
    }

    // 1D bin packing
    // first sort the vector in ascending order
    std::sort(trees.begin(), trees.end(), compare);

    int work_load_num[num_threads];
    for(int i=0;i<num_threads;i++){
    work_load_num[i]=0;
    }
    // assign the trees with the highest numbers of agents
    for(int i = 0; i < num_threads; i++) {
        work_load[i].push_back(trees.back().first);
        work_load_num[i] = trees.back().second;

        trees.pop_back();
    }

    int tmp_num = 0;

    // assign trees to the thread which has the lowest workload
    while(!trees.empty()) {
        tmp_tree = trees.back().first;
        tmp_num = trees.back().second;

        int min_index = 0;
        int min_value = INT_MAX;

        for(int i = 0; i < num_threads; i++) {
            if(work_load_num[i] < min_value) {
                min_value = work_load_num[i];
                min_index = i;
            }
        }

        work_load[min_index].push_back(tmp_tree);
        work_load_num[min_index] += tmp_num;

        trees.pop_back();
    }
}

void Ped::Model::move() {

  double lb_time_used_tmp=0;
  clock_t startlb, endlb;
    int timing=1;
    // calculate work load for each thread
    std::vector<Ped::Ttree*> *work_load;
    if(tick_num % 2 == 0) {

        if(work_load != NULL) {
            delete[] work_load;
        }
                if(timing==1)
                    startlb = clock();

                work_load = new std::vector<Ped::Ttree*>[THREADS];
                loadBalancing(THREADS, work_load);

                if(timing==1)
                {
                endlb = clock();
                lb_time_used_tmp = ((double) (endlb - startlb)) / CLOCKS_PER_SEC;
                //if (lb_time_used_tmp>lb_time_used)
                    lb_time_used += lb_time_used_tmp;
                }
        work_load_tmp = work_load;
    } else {
        work_load = work_load_tmp;
    }

        //if(tick_num>=999)
            //cout << "LB Time: " << lb_time_used<< " seconds." << endl;
    /* +-----------+
     * |x1,y1      |
     * |           |
     * |  subtree  |
     * |           |
     * |      x2,y2|
     * +-----------+
     */

    int *subtree_borders_x1 = new int[THREADS];
    int *subtree_borders_x2 = new int[THREADS];
    int *subtree_borders_y1 = new int[THREADS];
    int *subtree_borders_y2 = new int[THREADS];

    list<const Ped::Tagent*> *subtree_agents_lists = new list<const Ped::Tagent*>[THREADS];
    list<const Ped::Tagent*> *subtree_border_agents_lists = new list<const Ped::Tagent*>[THREADS];

    Ped::Tagent *tmp_agent;

    #pragma omp parallel shared(subtree_borders_x1, subtree_borders_x2, subtree_borders_y1, subtree_borders_y2, work_load, subtree_agents_lists, subtree_border_agents_lists)
    //for(int i = 0; i < THREADS; i++) {
    {

        int thread_id = omp_get_thread_num();

        // the thread iterates through all the subtrees which it was assigned with
        for(int i = 0; i < work_load[thread_id].size(); i++) {

            // calculate the border for the subtree
            subtree_borders_x1[thread_id] = (int) (work_load[thread_id][i]->getx());
            subtree_borders_y1[thread_id] = (int) (work_load[thread_id][i]->gety());

            subtree_borders_x2[thread_id] = (int) (work_load[thread_id][i]->getx()+work_load[thread_id][i]->getw())-1;
            subtree_borders_y2[thread_id] = (int) (work_load[thread_id][i]->gety()+work_load[thread_id][i]->geth())-1;

            // retrieve agents of subtree
            work_load[thread_id][i]->getAgents(subtree_agents_lists[thread_id]);

            // get agents at the border and move agents which are not at the borders
            for (list<const Ped::Tagent*>::const_iterator it = subtree_agents_lists[thread_id].begin(), end = subtree_agents_lists[thread_id].end(); it != end; ++it) {
                if((*it)->getX() == subtree_borders_x1[thread_id] || (*it)->getX() == subtree_borders_x2[thread_id] || (*it)->getY() == subtree_borders_y1[thread_id] || (*it)->getY() == subtree_borders_y2[thread_id]) {
                    subtree_border_agents_lists[thread_id].push_back(*it);
                } else {
                    tmp_agent = (Ped::Tagent*) (*it);

                    // calculate next position of agents which are not at the border
                    calculateNextPosition(tmp_agent);
                }
            }


            subtree_agents_lists[thread_id].clear();
        }
    }

    // calculate next position of border agents
    for(int i = 0; i < THREADS; i++) {
        for (list<const Ped::Tagent*>::const_iterator it = subtree_border_agents_lists[i].begin(), end = subtree_border_agents_lists[i].end(); it != end; ++it) {
            tmp_agent = (Ped::Tagent*) (*it);
            calculateNextPosition(tmp_agent);
        }
    }

    // actually move agents
    for(int i = 0; i < agents.size(); i++) {
        (*treehash)[agents[i]]->moveAgent(agents[i]);
    }


    if(subtree_borders_x1 != NULL) {
        delete[] subtree_borders_x1;
    }

    if(subtree_borders_x2 != NULL) {
        delete[] subtree_borders_x2;
    }

    if(subtree_borders_y1 != NULL) {
        delete[] subtree_borders_y1;
    }

    if(subtree_borders_y2 != NULL) {
        delete[] subtree_borders_y2;
    }

    if(subtree_agents_lists != NULL) {
        delete[] subtree_agents_lists;
    }

    if(subtree_border_agents_lists != NULL) {
        delete[] subtree_border_agents_lists;
    }
}

////////////
/// Everything below here relevant for Assignment 3.
/// Don't use this for Assignment 1!
///////////////////////////////////////////////
void Ped::Model::calculateNextPosition( Ped::Tagent *agent)
{
  // Search for neighboring agents
  set<const Ped::Tagent *> neighbors = getNeighbors(agent->getX(), agent->getY(), 2);

  // Retrieve their positions
  std::vector<std::pair<int, int> > takenPositions;
  for (std::set<const Ped::Tagent*>::iterator neighborIt = neighbors.begin(); neighborIt != neighbors.end(); ++neighborIt) {
    std::pair<int,int> position((*neighborIt)->getX(), (*neighborIt)->getY());
    takenPositions.push_back(position);
  }

  // Compute the three??? alternative positions that would bring the agent
  // closer to his desiredPosition, starting with the desiredPosition itself
  std::vector<std::pair<int, int> > prioritizedAlternatives;
  std::pair<int, int> pDesired(agent->getDesiredX(), agent->getDesiredY());

  ///THE POS IT WANTS TO GO TO!
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
  prioritizedAlternatives.push_back(p1);
  prioritizedAlternatives.push_back(p2);

    if(p1.first>(agent->getX()+1) || p1.first<(agent->getX()-1) || p1.second>(agent->getX()+1) || p1.second<(agent->getX()-1) ) {
        cout << "there is a distrubance in the force\n" << endl;
    }

  // Find the first empty alternative position
  for (std::vector<pair<int, int> >::iterator it = prioritizedAlternatives.begin(); it != prioritizedAlternatives.end(); ++it) {

    // If the current position is not yet taken by any neighbor
    if (std::find(takenPositions.begin(), takenPositions.end(), *it) == takenPositions.end()) {

      // Set the agent's position
      agent->setX((*it).first);
      agent->setY((*it).second);

      // Update the quadtree
      //#pragma omp critical
      //{
      //(*treehash)[agent]->moveAgent(agent);
      //}

      break;
    }
  }
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
  stack<Ped::Ttree*> treestack;

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
