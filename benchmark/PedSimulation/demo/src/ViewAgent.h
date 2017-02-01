///////////////////////////////////////////////////
// Low Level Parallel Programming 2016.
//
//     ==== Don't change this file! ====
// 
#ifndef _view_agent_h
#define _view_agent_h

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "ped_agent.h"
#include "ped_model.h"

class ViewAgent{
 public:
  ViewAgent(Ped::Tagent * agent, QGraphicsScene * scene);
  void paint();

  ViewAgent(Ped::Region *region, QGraphicsScene * scene);
  void paint(int x, int y, int width, int height);

  Ped::Region *region;
 private:
  const Ped::Tagent *agent;

  // The rectangle on the GUI representing this agent
  QGraphicsRectItem * rect;
 };

#endif
