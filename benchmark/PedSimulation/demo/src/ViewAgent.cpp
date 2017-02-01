///////////////////////////////////////////////////
// Low Level Parallel Programming 2016.
//
//     ==== Don't change this file! ====
//
#include "ViewAgent.h"
#include "MainWindow.h"
#include <QGraphicsItemAnimation>

ViewAgent::ViewAgent(Ped::Tagent * agent,QGraphicsScene * scene): agent(agent)
{
  QBrush blueBrush(Qt::black);
  QPen outlinePen(Qt::black);
  outlinePen.setWidth(1);

  rect = scene->addRect(MainWindow::cellToPixel(agent->getX()), MainWindow::cellToPixel(agent->getY()),
      MainWindow::cellsizePixel-1, MainWindow::cellsizePixel-1, outlinePen, blueBrush);
}


ViewAgent::ViewAgent(Ped::Region *region, QGraphicsScene * scene): region(region)
{
  QBrush redBrush(Qt::transparent);
  QPen outlinePen(Qt::black);
  outlinePen.setWidth(2);

  rect = scene->addRect(
      region->regionPosition.x*5,
      region->regionPosition.y*5,
      region->regionPosition.width*5,
      region->regionPosition.height*5, outlinePen, redBrush);
}


void ViewAgent::paint(){
  QColor colors[] = { Qt::black, Qt::yellow, Qt::cyan, Qt::gray, Qt::green, Qt::magenta, Qt::red, Qt::blue, Qt::darkBlue, Qt::darkCyan, Qt::darkGreen, Qt::darkMagenta, Qt::darkRed };
  const int num_colors = 13;

  if (agent->_update_color) {
    rect->setPen(QPen(colors[agent->_region_index % num_colors]));
    agent->_update_color = false;
  }

  rect->setRect(MainWindow::cellToPixel(agent->getX()), MainWindow::cellToPixel(agent->getY()),
    MainWindow::cellsizePixel-1, MainWindow::cellsizePixel-1);
}

void ViewAgent::paint(int x, int y, int width, int height){
  rect->setRect(x*5, y*5, (width)*5, (height)*5);
}

