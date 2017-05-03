//
// pedsim - A microscopic pedestrian simulation system.
// Copyright (c) 2003 - 2014 by Christian Gloor
//
//
// Adapted for Low Level Parallel Programming 2016
//
// Model coordinates a time step in a scenario: for each
// time step all agents need to be moved by one position if
// possible.
//
#ifndef _ped_model_h_
#define _ped_model_h_
#include <vector>
#include <map>

#include "ped_tree.h"
#include "ped_agent.h"

#include <iostream>
#include <atomic>

#define CL_USE_DEPRECATED_OPENCL_1_2_APIS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <CL/cl.h>
#include <sys/time.h>

namespace Ped{
  const int STARTINGREGIONS = 4;
  const int SCENARIOWIDTH = 1200;
  const int SCENARIOHEIGHT = 1200;
  const int MAX_REGIONS = 400;
  const int MERGEWEIGHT = 20;
  class Tagent;
  class Ttree;
  class Region;

  template<class T>
  struct node
  {
    T data;
    node* next;

    node(const T& data) : data(data), next(nullptr) {}
    ~node() {}
  };

  template<class T>
  class AtomicStack
  {
    std::atomic<node<T>*> head;
    public:
    void push(const T& data)
    {
      node<T>* new_node = new node<T>(data);

      // put the current value of head into new_node->next
      new_node->next = head.load(std::memory_order_relaxed);

      // now make new_node the new head, but if the head
      // is no longer what's stored in new_node->next
      // (some other thread must have inserted a node just now)
      // then put that new head into new_node->next and try again
      while(!std::atomic_compare_exchange_weak_explicit(
            &head,
            &new_node->next,
            new_node,
            std::memory_order_release,
            std::memory_order_relaxed))
        ; // the body of the loop is empty
      // note: the above loop is not thread-safe in at least
      // GCC prior to 4.8.3 (bug 60272), clang prior to 2014-05-05 (bug 18899)
      // MSVC prior to 2014-03-17 (bug 819819). See member function version for workaround
    }

    AtomicStack(){
      head = NULL;
    }
    T pop(){

      node<T> *oldHead = head.load(std::memory_order_relaxed);
      T returnData = oldHead->data;


      head = oldHead->next;

      //delete oldHead;

      return returnData;
    }

    bool empty(){
      node<T> *oldHead = head.load(std::memory_order_relaxed);

      if (oldHead == NULL){
        return true;
      }
      if (oldHead == nullptr){
        return true;
      }

      return false;
    }
  };

    // The implementation modes for Assignment 1 + 2:
  // chooses which implementation to use for tick()
  enum IMPLEMENTATION {CUDA, VECTOR, OMP, PTHREAD, SEQ, TICK_OPENCL, COLLISION_SEQ, COLLISION_PARALLEL, HEATMAP_SEQ, HEATMAP_PARALLEL, EXPERIMENTAL};
  enum COLOR_MODE  { NONE, REGION, CROSS };
  enum HEATMAP_MODE  { DISABLED, NAIVE, OPENCL };
  enum MOVE_ACTION  { INSIDE_CURRENT_REGION, TO_NEW_REGION, TO_EXISTING_REGION };


  class Region{
    public:

      static atomic_int index;
      unsigned int _index = 0;
      int mergeWeight = MERGEWEIGHT;
      bool used = true;
      bool split = false;
      bool new_region = false;


      AtomicStack<Tagent*> agentStack;

      struct regionPosition{
        int x, y;
        int width, height;
      }regionPosition;

      struct regionPosition oldSelf;

      std::vector<Tagent*> internal_agents;



      struct splitData{
        Region* parent;
        std::vector<Region*> children;
      }splitData;

      Region(){
        splitData.parent = NULL;
        _index = ++index;
     }

      Region(struct regionPosition p){
        this->regionPosition = p;
        splitData.parent = NULL;
        _index = ++index;
      }


      void add_agents_from_stack(){
        while (!agentStack.empty()){
          internal_agents.push_back(agentStack.pop());
        }
      };

      void reset();

      void mergeSizes(Region* region);

      struct regionPosition getRegionPos() { return regionPosition; }
      void splitRegion(Region *region);
      bool merge();



  };

  class Model
  {
    public:

      std::vector<Region*> regions;

      std::vector<Region*> unusedRegions;

      AtomicStack<Region*> regionStack;
      AtomicStack<Region*> paintRegionStack;


      void add_regions_from_stack(){
        while (!regionStack.empty()){
          regions.push_back(regionStack.pop());
        }
      };

      std::atomic_bool grid[SCENARIOHEIGHT][SCENARIOHEIGHT];

      // Coordinates a time step in the scenario: move all agents by one step (if applicable).
      void tick();
      void tick_seq();
      void tick_omp();
      void tick_pthread();
      void tick_vector();
      void tick_opencl();
      void tick_collision_seq();
      void tick_collision_parallel();
      void tick_heatmap_seq();
      void tick_heatmap_parallel();

      void pushToRegion(unsigned int region_index, Tagent* agent, bool use_stack);

      void close();

      // Sets everything up
      void setup(std::vector<Tagent*> agentsInScenario, IMPLEMENTATION impl, unsigned int nthreads, HEATMAP_MODE enable_heatmap);

      // Coordinates a time step in the scenario: move all agents by one step (if applicable).
      // Returns the agents of this scenario
      const std::vector<Tagent*> getAgents() const { return agents; };
      //
      // Returns the regions of this scenario
      const std::vector<Region*> getRegions() const { return regions; };


      // Updates the treehash, which maps each agent to the current tree node that contains it
      void setResponsibleTree(Ped::Ttree *tree, const Ped::Tagent *agent);

      // Adds an agent to the tree structure
      void placeAgent(const Ped::Tagent *a);

      // Cleans up the tree and restructures it. Worth calling every now and then.
      void cleanup();
      ~Model();

      // Returnst the heatmap visualizing the density of agents
      int const * const * getHeatmap() const { return blurred_heatmap; };
      int getHeatmapSize() const;

      COLOR_MODE _color_mode = NONE;
      HEATMAP_MODE heatmap_mode;
    private:
      struct {
        struct { float *x; float *y; } position;
        struct { float *x; float *y; } desired;
        struct { float *x; float *y; float *r; } destination;
      } vector;

      void allocateVectors(size_t size);

      // Denotes which implementation (sequential, parallel implementations..)
      // should be used for calculating the desired positions of
      // agents (Assignment 1)
      IMPLEMENTATION implementation;

      unsigned int num_threads;

      // The agents in this scenario
      std::vector<Tagent*> agents;

      void move_seq(Tagent* agent);

      // Moves an agent towards its next position
      MOVE_ACTION move(Tagent* agent, Region *reg);

      int findRegion(int x, int y);

      bool atEdge(struct Ped::Region::regionPosition regionPosition, int x, int y);


      bool moveAgentCAS(int x, int y, Tagent* agent);

      void moveAgent(struct agentData agentData);

      ////////////
      /// Everything below here won't be relevant until Assignment 3
      ///////////////////////////////////////////////

      // The maximum quadtree depth
      static const int treeDepth = 10;

      // Quadtree that keeps track of the positions of each agent
      // for faster neighbor search in
      Ped::Ttree *tree;

      // Maps the agent to the tree node containing it. Convenience data structure
      // in order to update the tree in case the agent moves.
      std::map<const Ped::Tagent*, Ped::Ttree*> *treehash;

      // Returns the set of neighboring agents for the specified position
      set<const Ped::Tagent*> getNeighbors(int x, int y, int dist) const;
      void getNeighbors(list<const Ped::Tagent*>& neighborList, int x, int y, int d) const;


      void computeNextDesiredPosition_opencl();

      ////////////
      /// Everything below here won't be relevant until Assignment 4
      ///////////////////////////////////////////////
      #define SIZE 1024
      #define CELLSIZE 5
      #define SCALED_SIZE SIZE*CELLSIZE

      const size_t heatmap_size = (SIZE*SIZE);

      cl_platform_id _platform[2];
      cl_device_id _device_id;

      cl_context _context;
      cl_command_queue _queue;
      cl_program _program;

      cl_kernel _fade_kernel;
      cl_kernel _update_kernel;
      cl_kernel _scale_kernel;
      cl_kernel _blur_kernel;
      cl_kernel _desired_kernel;

      cl_mem device_input_heatmap;
      cl_mem device_output_heatmap;

      cl_mem device_scaled_heatmap;
      cl_mem device_input_scaled_heatmap;
      cl_mem device_blurred_heatmap;

      cl_mem device_input_agent_x;
      cl_mem device_input_agent_y;
      cl_mem device_output_agent_x;
      cl_mem device_output_agent_y;

      cl_mem device_input_dest_x;
      cl_mem device_input_dest_y;
      cl_mem device_input_radius;
      cl_mem device_output_desired_x;
      cl_mem device_output_desired_y;
      cl_mem device_output_reached_destination;

      void init_opencl();
      void create_opencl_programs();
      void create_opencl_buffers();
      void fade_heatmap();
      void update_heatmap();
      void scale_heatmap();
      void blur_heatmap();
      void desired_opencl(bool *reached_destination);
      void wait_for_opencl_to_finish();
      void destroy_opencl_programs();
      void kill_opencl();

      // The heatmap representing the density of agents
      int ** heatmap;

      // The scaled heatmap that fits to the view
      int ** scaled_heatmap;

      // The final heatmap: blurred and scaled to fit the view
      int ** blurred_heatmap;

      void setup_heatmap();
      void compute_heatmap();
      void update_heatmap_seq();
      void update_heatmap_opencl();
  };
}
#endif
