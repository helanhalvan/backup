//
// pedsim - A microscopic pedestrian simulation system.
// Copyright (c) 2003 - 2014 by Christian Gloor
//
//
// Adapted for Low Level Parallel Programming 2015
//
// TAgent represents an agent in the scenario. Each
// agent has a position (x,y) and a number of destinations
// it wants to visit (waypoints). The desired next position
// represents the position it would like to visit next as it
// will bring it closer to its destination.
// Note: the agent will not move by itself, but the movement
// is handled in ped_model.cpp.
#ifndef _ped_agent_h_
#define _ped_agent_h_ 1


// g++ does not understand cuda stuff. This makes it ignore them. (use this if you want)
#ifndef __CUDACC__
#define __device__
#define __host__
#endif

#include <vector>
#include <deque>

using namespace std;

namespace Ped {
  class Twaypoint;

  class Tagent {
    friend class Model;
  public:
    Tagent(int posX, int posY);
    Tagent(float posX, float posY);

    // Returns the coordinates of the desired position
    float getDesiredX() const {return *desired_x;}
    float getDesiredY() const {return *desired_y;}

    // Sets the agent's position
    void setX(float newX) {*x = newX;}
    void setY(float newY) {*y = newY;}

    // Update the position according to get closer
    // to the current destination
    void computeNextDesiredPosition();

    // Position of agent defined by x and y
    float getX() const { return *x; };
    float getY() const { return *y; };

    // Adds a new waypoint to reach for this agent
    void addWaypoint(Twaypoint* wp);

    void move();

    void bindData(float* px, float* py, float* dx, float* dy, float* tx, float* ty, float* tr);

    mutable bool _update_color = true;
    int _region_index = 0;


  private:
    Tagent() {};

    // The agent's start position
    float start_x;
    float start_y;

    // The agent's current position
    float *x;
    float *y;

    // The agent's desired next position
    float *desired_x;
    float *desired_y;

    // The agent's destination
    float *destination_x;
    float *destination_y;
    float *destination_r;

    // The current destination (may require several steps to reach)
    Twaypoint* destination;

    // The last destination
    Twaypoint* lastDestination;

    // The queue of all destinations that this agent still has to visit
    deque<Twaypoint*> waypoints;

    // Internal init function
    void init(int posX, int posY);

    // Returnst he next destination to visit
    Twaypoint* getNextDestination();
  };
}

#endif
