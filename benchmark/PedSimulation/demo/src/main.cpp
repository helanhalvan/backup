///////////////////////////////////////////////////
// Low Level Parallel Programming 2016.
//
//     ==== Don't change this file! ====
//
// The main starting point for the crowd simulation.
//

#include "ped_model.h"
#include "MainWindow.h"
#include "ParseScenario.h"

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QApplication>
#include <QTimer>
#include <thread>

#include <unistd.h>

#include "PedSimulation.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cstring>




int main(int argc, char*argv[]) {
  bool timing_mode = 0;
  bool collision = false;
  Ped::HEATMAP_MODE heatmap_mode = Ped::DISABLED;
  Ped::IMPLEMENTATION implementation = Ped::SEQ;
  Ped::COLOR_MODE color_mode = Ped::NONE;
  unsigned int num_threads = std::thread::hardware_concurrency();
  int i = 1;
  QString scenefile = "scenario.xml";

  // Argument handling
  while(i < argc)
  {
    if(argv[i][0] == '-' && argv[i][1] == '-')
    {
      if(strcmp(&argv[i][2],"timing-mode") == 0) {
        //cout << "Timing mode on\n";
        timing_mode = true;
      }
      else if(strcmp(&argv[i][2],"collision") == 0)              { collision = true; }
      else if(strcmp(&argv[i][2],"heatmap=disabled") == 0)       { heatmap_mode = Ped::DISABLED; }
      else if(strcmp(&argv[i][2],"heatmap=naive") == 0)          { collision = true; heatmap_mode = Ped::NAIVE; }
      else if(strcmp(&argv[i][2],"heatmap=opencl") == 0)         { collision = true; heatmap_mode = Ped::OPENCL; }
      else if(strcmp(&argv[i][2],"implementation=parallel")== 0) { implementation = Ped::OMP; /* any implementation other than Ped::SEQ will trigger parallel collision mode */}
      else if(strcmp(&argv[i][2],"implementation=seq") == 0)     { implementation = Ped::SEQ; }
      else if(strcmp(&argv[i][2],"implementation=omp") == 0)     { implementation = Ped::OMP; }
      else if(strcmp(&argv[i][2],"implementation=pthread") == 0) { implementation = Ped::PTHREAD; }
      else if(strcmp(&argv[i][2],"implementation=cuda") == 0)    { implementation = Ped::CUDA; }
      else if(strcmp(&argv[i][2],"implementation=vector") == 0)  { implementation = Ped::VECTOR; }
      else if(strcmp(&argv[i][2],"implementation=opencl") == 0)  { implementation = Ped::TICK_OPENCL; }
      else if(strcmp(&argv[i][2],"color=cross") == 0)  { color_mode = Ped::CROSS; }
      else if(strcmp(&argv[i][2],"color=region") == 0)  { color_mode = Ped::REGION; }
      else if(strcmp(&argv[i][2],"color=none") == 0)  { color_mode = Ped::NONE; }
      else if(strcmp(&argv[i][2],"nthreads") == 0)  {
        num_threads = atoi(argv[++i]);
        std::cout << "num threads " << num_threads << std::endl;
      } else if(strcmp(&argv[i][2],"help") == 0) {
        cout << "Usage: " << argv[0] << " [--help] [--timing-mode] [--implementation=<seq|omp|pthread|opencl|vector|parallel>] [--nthreads num] [--collision] [--color=<none|cross|region>] [--heatmap=<disabled|naive|opencl>] [scenario]" << endl;
        cout << "                 --collision                   can only be used with --implementation=<seq|parallel>" << endl;
        cout << "                                               defaults to --implementation=seq" << endl;

        return 0;
      }
      else {
        cerr << "Unrecognized command: \"" << argv[i] << "\". Ignoring ..." << endl;
      }
    }
    else // Assume it is a path to scenefile
    {
      scenefile = argv[i];
    }
    i+=1;
  }

  // Reading the scenario file and setting up the crowd simulation model
  Ped::Model model;
  model._color_mode = color_mode;
  ParseScenario parser(scenefile);

  if (collision == true) {
    //cout << "collision enabled ";
      if (implementation == Ped::SEQ) {
        cout << "(seq)";
          implementation = Ped::COLLISION_SEQ;
      } else {
        //cout << "(parallel)";
          implementation = Ped::COLLISION_PARALLEL; //THIS OVERRITES ALL THE options for parallel collsion detection
      }
    cout << std::endl;
  }
  if (heatmap_mode != Ped::DISABLED) {
    cout << "heatmap enabled" << endl;
  }
    cout << parser.getAgents().size() <<endl;
  model.setup(parser.getAgents(), implementation, num_threads, heatmap_mode);

  // GUI related set ups
  QApplication app(argc, argv);
  MainWindow mainwindow(model);

  // Default number of steps to simulate
  const int maxNumberOfStepsToSimulate = 10000;
  PedSimulation *simulation = new PedSimulation(model, mainwindow);

  cout << "OPENMP" << endl;
  int retval = 0;
  // Timing of simulation
  //std::chrono::time_point<std::chrono::system_clock> start,stop;
  int start = time(0);//std::chrono::system_clock::now();

  if(timing_mode)
  {
    // Simulation mode to use when profiling (without any GUI)
    simulation->runSimulationWithoutQt(maxNumberOfStepsToSimulate);
  }
  else
  {
    // Simulation mode to use when visualizing
    mainwindow.show();
    simulation->runSimulationWithQt(maxNumberOfStepsToSimulate);
    retval = app.exec();
  }

  // End timing
  int stop = time(0);//std::chrono::system_clock::now();
  //std::chrono::duration<double> elapsed_seconds = stop-start;
  //cout << "Time: " << elapsed_seconds.count() << " seconds." << endl;
  printf("%i seconds\n", stop-start);
  //cout << "Done" << endl;
  delete (simulation);
  return retval;
}
