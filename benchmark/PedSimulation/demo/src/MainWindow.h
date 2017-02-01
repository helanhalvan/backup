///////////////////////////////////////////////////
// Low Level Parallel Programming 2016.
//
#ifndef _mainwindow_h_
#define _mainwindow_h_

#include <QMainWindow>
#include <QGraphicsScene>
#include <QLabel>
#include <QKeyEvent>

#include <vector>

#include "ped_model.h"
#include "ped_agent.h"
#include "ViewAgent.h"
#include <iostream>

////////////
/// Comment in for Assignment 4
///////////////////////////////////////////////
#define ASSIGNMENT_4

class QGraphicsView;

class MainWindow : public QMainWindow {
 public:
  MainWindow() = delete;
  MainWindow(Ped::Model &model);

  // paint is called after each computational step
  // to repaint the window
  void paint();

  void keyPressEvent(QKeyEvent* event) {
    if (event->key() == Qt::Key_Escape || event->key() == Qt::Key_Q) {
      exit(0);
    }
  }

  static int cellToPixel(int val);
  static const int cellsizePixel = 5;
 private:
  QGraphicsView *graphicsView;
  QGraphicsScene * scene;

  Ped::Model &model;

  // the graphical representation of each agent
  std::vector<ViewAgent*> viewAgents;

  //Regions
  std::vector<ViewAgent*> regions;

  // The pixelmap containing the heatmap image (Assignment 4)
  QGraphicsPixmapItem *pixmap;
};

#endif
