//
// pedsim - A microscopic pedestrian simulation system.
// Copyright (c) 2003 - 2014 by Christian Gloor
//
//
// Adapted for Low Level Parallel Programming 2015
//
#include "ped_agent.h"
#include "ped_waypoint.h"
#include <math.h>

Ped::Tagent::Tagent(int posX, int posY) {
  Ped::Tagent::init(posX, posY);
}

Ped::Tagent::Tagent(float posX, float posY) {
  Ped::Tagent::init((int) round(posX), (int) round(posY));
}

void Ped::Tagent::init(int posX, int posY) {
  start_x = posX;
  start_y = posY;
  x = &start_x;
  y = &start_y;
  destination = NULL;
  lastDestination = NULL;
}

void Ped::Tagent::bindData(float* px, float* py, float* dx, float* dy, float* tx, float* ty, float* tr) {
  x = px;
  y = py;
  desired_x = dx;
  desired_y = dy;
  destination_x = tx;
  destination_y = ty;
  destination_r = tr;

  *x = start_x;
  *y = start_y;


  destination = waypoints.front();
  waypoints.pop_front();

  *destination_x = destination->getx();
  *destination_y = destination->gety();
  *destination_r = destination->getr();

}

// Uses an aproximate fast inverse square root algorithm.
// This is copied from Quake III Arena.
float invSqrt(float x){
  float xhalf = 0.5f * x;
  int i = *(int*)&x;            // store floating-point bits in integer
  i = 0x5f3759df - (i >> 1);    // initial guess for Newton's method
  x = *(float*)&i;              // convert new bits into float
  x = x*(1.5f - xhalf*x*x);     // One round of Newton's method
  return x;
}

void Ped::Tagent::computeNextDesiredPosition() {
  destination = getNextDestination();
  if (destination == NULL) {
    // no destination, no need to
    // compute where to move to
    return;
  }

  float diffX = destination->getx() - *x;
  float diffY = destination->gety() - *y;
  float len = invSqrt(diffX * diffX + diffY * diffY);
  *desired_x = round(*x + diffX * len);
  *desired_y = round(*y + diffY * len);
}

void Ped::Tagent::addWaypoint(Twaypoint* wp) {
  waypoints.push_back(wp);
}

void Ped::Tagent::move() {
  computeNextDesiredPosition();
  setX(getDesiredX());
  setY(getDesiredY());
}

Ped::Twaypoint* Ped::Tagent::getNextDestination() {
  Ped::Twaypoint* nextDestination = NULL;
  bool agentReachedDestination = false;

  if (destination != NULL) {
    // compute if agent reached its current destination
    double diffX = destination->getx() - *x;
    double diffY = destination->gety() - *y;
    double length = diffX * diffX + diffY * diffY;
    double r = destination->getr();
    agentReachedDestination = length < (r * r);
  }

  if ((agentReachedDestination || destination == NULL) && !waypoints.empty()) {
    // Case 1: agent has reached destination (or has no current destination);
    // get next destination if available
    waypoints.push_back(destination);
    nextDestination = waypoints.front();
    waypoints.pop_front();
  }
  else {
    // Case 2: agent has not yet reached destination, continue to move towards
    // current destination
    nextDestination = destination;
  }

  return nextDestination;
}
