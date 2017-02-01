// Created for Low Level Parallel Programming 2016
//
// Implements the heatmap functionality.
//
#include "ped_model.h"
#include "ped_agent.h"

#ifdef TIME_OPENCL
#include <chrono>
#endif

#include <cstdlib>
#include <iostream>
#include "opencl_code.h"
using namespace std;

const char *err_code (cl_int err_in);
void _check_error(cl_int err, const char *operation, const char *filename, int line);
#define check_error(error, operation) _check_error(error, operation, __FILE__, __LINE__)

#define LOCAL_SIZE 512;


void Ped::Model::init_opencl() {

  //// Number of work items in each local work group
  //localSize = 1024;   // ???

  //// Number of total work items - localSize must be devisor
  //globalSize = ceil(n/(float)localSize)*localSize;

  cl_int err;
  // Bind to platform
  // if only Intel implementation of OpenCL we have only 1 plaftorm
  err = clGetPlatformIDs(2, _platform, NULL);
  check_error(err, "clGetPlatformIDs(2, cpPlatform, NULL)");


  // Get ID for the device
  // if only 1 CPU -> only one device
  err = clGetDeviceIDs(_platform[0], CL_DEVICE_TYPE_ALL, 1, &_device_id, NULL);
  check_error(err, "clGetDeviceIDs(cpPlatform[0], CL_DEVICE_TYPE_ALL, 1, &device_id, NULL)");

  // Create a context
  _context = clCreateContext(0, 1, &_device_id, NULL, NULL, &err);
  check_error(err, "clCreateContext(0, 1, &device_id, NULL, NULL, &err)");

  // Create a command queue for each device id (we have one for one cpu)
  _queue = clCreateCommandQueue(_context, _device_id, 0, &err);
  check_error(err, "clCreateCommandQueue(context, device_id, 0, &err);");

  //_opencl->create_program(libpedsim_heatmap_kernel_source_cl, "vecAdd");
  //_opencl->create_application_buffers();
  create_opencl_programs();
  create_opencl_buffers();
}

void Ped::Model::create_opencl_programs() {

  cl_int err;
  //printf("%s\n", heatmap_cl);
  _program = clCreateProgramWithSource(_context, 1, (const char **) & heatmap_cl, NULL, &err);
  check_error(err, "clCreateProgramWithSource(_context, 1, (const char **) & libpedsim/heatmap_kernel_source_cl, NULL, &err)");

  // Build the program executable
  err = clBuildProgram(_program, 0, NULL, NULL, NULL, NULL);

  if (err == CL_BUILD_PROGRAM_FAILURE) {
    // Determine the size of the log
    size_t log_size;
    clGetProgramBuildInfo(_program, _device_id, CL_PROGRAM_BUILD_LOG, 0, NULL, &log_size);

    // Allocate memory for the log
    char* log = (char*) malloc(log_size);

    // Get the log
    clGetProgramBuildInfo(_program, _device_id, CL_PROGRAM_BUILD_LOG, log_size, log, NULL);

    // Print the log
    printf("%s\n", log);
    check_error(err, "clBuildProgram(_program, 0, NULL, NULL, NULL, NULL);");
  }

  // Create the compute kernel in the program we wish to run
  _fade_kernel = clCreateKernel(_program, "fade_heatmap", &err);
  check_error(err, "clCreateKernel(_program, \"fade_heatmap\", &err)");

  _update_kernel = clCreateKernel(_program, "update_heatmap", &err);
  check_error(err, "clCreateKernel(_program, \"update_heatmap\", &err)");

  _scale_kernel = clCreateKernel(_program, "scale_heatmap", &err);
  check_error(err, "clCreateKernel(_program, \"scale_heatmap\", &err)");

  _blur_kernel = clCreateKernel(_program, "blur_heatmap", &err);
  check_error(err, "clCreateKernel(_program, \"blur_heatmap\", &err)");


  _desired_kernel = clCreateKernel(_program, "desired_position", &err);
  check_error(err, "clCreateKernel(_program, \"desired_position\", &err)");

}

void Ped::Model::create_opencl_buffers() {
  cl_int err;

  // Heatmap
  device_input_heatmap = clCreateBuffer(_context, CL_MEM_READ_WRITE, heatmap_size * sizeof(int), NULL, &err);
  check_error(err, "clCreateBuffer");

  device_output_heatmap = clCreateBuffer(_context, CL_MEM_READ_WRITE, heatmap_size * sizeof(int), NULL, &err);
  check_error(err, "clCreateBuffer");

  device_scaled_heatmap = clCreateBuffer(_context, CL_MEM_READ_WRITE, SCALED_SIZE*SCALED_SIZE * sizeof(int), NULL, &err);
  check_error(err, "clCreateBuffer");

  device_input_scaled_heatmap = clCreateBuffer(_context, CL_MEM_READ_WRITE, SCALED_SIZE*SCALED_SIZE * sizeof(int), NULL, &err);
  check_error(err, "clCreateBuffer");

  device_blurred_heatmap = clCreateBuffer(_context, CL_MEM_READ_WRITE, SCALED_SIZE*SCALED_SIZE * sizeof(int), NULL, &err);
  check_error(err, "clCreateBuffer");

  // Move & Desired
  const unsigned int num_agents = agents.size();
  device_input_agent_x = clCreateBuffer(_context, CL_MEM_READ_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_input_agent_y = clCreateBuffer(_context, CL_MEM_READ_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_input_dest_x = clCreateBuffer(_context, CL_MEM_READ_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_input_dest_y = clCreateBuffer(_context, CL_MEM_READ_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_input_radius = clCreateBuffer(_context, CL_MEM_READ_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_output_agent_x = clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);");

  device_output_agent_y = clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);");

  device_output_desired_x = clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_output_desired_y = clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(float), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");

  device_output_reached_destination = clCreateBuffer(_context, CL_MEM_WRITE_ONLY, num_agents * sizeof(bool), NULL, &err);
  check_error(err, "clCreateBuffer(_context, CL_MEM_READ_ONLY, heatmap_size * sizeof(int), NULL, &err);");
}

void Ped::Model::fade_heatmap() {
  cl_int err;

  //err = clEnqueueWriteBuffer(_queue, device_input_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL);
  //check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  //clEnqueueCopyBuffer(_queue, device_output_heatmap, device_input_heatmap, 0, 0, heatmap_size*sizeof(int), 0, NULL, NULL);
  //check_error(err, "clEnqueueCopyBuffer(_queue, device_output_heatmap, device_input_heatmap, 0, 0, heatmap_size*sizeof(int), 0, NULL, NULL);");

  //err  = clSetKernelArg(_fade_kernel, 0, sizeof(cl_mem), &device_input_heatmap);
  err  = clSetKernelArg(_fade_kernel, 0, sizeof(cl_mem), &device_output_heatmap);
  err |= clSetKernelArg(_fade_kernel, 1, sizeof(unsigned int), &heatmap_size);
  check_error(err, "bind_kernel_argument");


  // Number of work items in each local work group
  size_t local_size = LOCAL_SIZE;   // ???

  // Number of total work items - localSize must be devisor
  size_t global_size = ceil(heatmap_size/(float)local_size)*local_size;

  // Execute the kernel over the entire range of the data set
  err = clEnqueueNDRangeKernel(_queue, _fade_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);
  check_error(err, "clEnqueueNDRangeKernel(_queue, _fade_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);");

  // Read the results from the device
  //err = clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );
  //check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

}

void Ped::Model::update_heatmap() {
  cl_int err;
  const unsigned int num_agents = agents.size();
  const unsigned int size = SIZE;

  err = clEnqueueWriteBuffer(_queue, device_input_agent_x, CL_FALSE, 0, num_agents*sizeof(float), vector.desired.x, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");
  err = clEnqueueWriteBuffer(_queue, device_input_agent_y, CL_FALSE, 0, num_agents*sizeof(float), vector.desired.y, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err  = clSetKernelArg(_update_kernel, 0, sizeof(cl_mem), &device_input_agent_x);
  err |= clSetKernelArg(_update_kernel, 1, sizeof(cl_mem), &device_input_agent_y);
  err |= clSetKernelArg(_update_kernel, 2, sizeof(unsigned int), &num_agents);
  err |= clSetKernelArg(_update_kernel, 3, sizeof(cl_mem), &device_output_heatmap);
  err |= clSetKernelArg(_update_kernel, 4, sizeof(unsigned int), &size);
  err |= clSetKernelArg(_update_kernel, 5, sizeof(unsigned int), &size);
  check_error(err, "bind_kernel_argument");


  // Number of work items in each local work group
  size_t local_size = LOCAL_SIZE;   // ???

  // Number of total work items - localSize must be devisor
  size_t global_size = ceil(num_agents/(float)local_size)*local_size;

  // Execute the kernel over the entire range of the data set
  err = clEnqueueNDRangeKernel(_queue, _update_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);
  check_error(err, "clEnqueueNDRangeKernel(_queue, _update_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);");

  // Read the results from the device
  //err = clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );
  //check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");
}

void Ped::Model::scale_heatmap() {
  cl_int err;
  const unsigned int num_agents = agents.size();
  const unsigned int size = SIZE;
  const unsigned int scaled_size = SCALED_SIZE*SCALED_SIZE;


  //err = clEnqueueWriteBuffer(_queue, device_input_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL);
  //check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");
  //err = clEnqueueWriteBuffer(_queue, device_scaled_heatmap, CL_FALSE, 0, scaled_size*sizeof(int), scaled_heatmap[0], 0, NULL, NULL);
  //check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err  = clSetKernelArg(_scale_kernel, 0, sizeof(cl_mem), &device_output_heatmap);
  err |= clSetKernelArg(_scale_kernel, 1, sizeof(cl_mem), &device_scaled_heatmap);
  err |= clSetKernelArg(_scale_kernel, 2, sizeof(unsigned int), &heatmap_size);
  err |= clSetKernelArg(_scale_kernel, 3, sizeof(unsigned int), &size);
  err |= clSetKernelArg(_scale_kernel, 4, sizeof(unsigned int), &size);
  check_error(err, "bind_kernel_argument");


  // Number of work items in each local work group
  size_t local_size = LOCAL_SIZE;   // ???

  // Number of total work items - localSize must be devisor
  size_t global_size = ceil(scaled_size/(float)local_size)*local_size;

  // Execute the kernel over the entire range of the data set
  err = clEnqueueNDRangeKernel(_queue, _scale_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);
  check_error(err, "clEnqueueNDRangeKernel(_queue, _update_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);");

  // Read the results from the device
  //err = clEnqueueReadBuffer(_queue, device_scaled_heatmap, CL_FALSE, 0, scaled_size*sizeof(int), scaled_heatmap[0], 0, NULL, NULL );
  //check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");
}

void Ped::Model::blur_heatmap() {
  cl_int err;
  const unsigned int scaled_size = SCALED_SIZE*SCALED_SIZE;
  const unsigned int size = SCALED_SIZE;


  //err = clEnqueueWriteBuffer(_queue, device_input_scaled_heatmap, CL_FALSE, 0, scaled_size*sizeof(int), scaled_heatmap[0], 0, NULL, NULL);
  //check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");
  //err = clEnqueueWriteBuffer(_queue, device_blurred_heatmap, CL_FALSE, 0, scaled_size*sizeof(int), blurred_heatmap[0], 0, NULL, NULL);
  //check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err  = clSetKernelArg(_blur_kernel, 0, sizeof(cl_mem), &device_scaled_heatmap);
  err |= clSetKernelArg(_blur_kernel, 1, sizeof(cl_mem), &device_blurred_heatmap);
  err |= clSetKernelArg(_blur_kernel, 2, sizeof(unsigned int), &size);
  err |= clSetKernelArg(_blur_kernel, 3, sizeof(unsigned int), &size);
  check_error(err, "bind_kernel_argument");


  // Number of work items in each local work group
  size_t local_size = LOCAL_SIZE;   // ???

  // Number of total work items - localSize must be devisor
  size_t global_size = ceil(scaled_size/(float)local_size)*local_size;

  // Execute the kernel over the entire range of the data set
  err = clEnqueueNDRangeKernel(_queue, _blur_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);
  check_error(err, "clEnqueueNDRangeKernel(_queue, _blur_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);");

  // Read the results from the device
  err = clEnqueueReadBuffer(_queue, device_blurred_heatmap, CL_FALSE, 0, scaled_size*sizeof(int), blurred_heatmap[0], 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");
}


void Ped::Model::desired_opencl(bool *reached_destination) {
  cl_int err;
  const unsigned int num_agents = agents.size();
  //const unsigned int size = SIZE;

  // Position
  err = clEnqueueWriteBuffer(_queue, device_input_agent_x, CL_FALSE, 0, num_agents*sizeof(float), vector.position.x, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err = clEnqueueWriteBuffer(_queue, device_input_agent_y, CL_FALSE, 0, num_agents*sizeof(float), vector.position.y, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  // Destination
  err = clEnqueueWriteBuffer(_queue, device_input_dest_x, CL_FALSE, 0, num_agents*sizeof(float), vector.destination.x, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err = clEnqueueWriteBuffer(_queue, device_input_dest_y, CL_FALSE, 0, num_agents*sizeof(float), vector.destination.y, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  err = clEnqueueWriteBuffer(_queue, device_input_radius, CL_FALSE, 0, num_agents*sizeof(float), vector.destination.r, 0, NULL, NULL);
  check_error(err, "clEnqueueWriteBuffer(_queue, d_a, CL_FALSE, 0, heatmap_size, h_a, 0, NULL, NULL);");

  // Set arguments
  err  = clSetKernelArg(_desired_kernel, 0, sizeof(cl_mem), &device_input_agent_x);
  err |= clSetKernelArg(_desired_kernel, 1, sizeof(cl_mem), &device_input_agent_y);
  err |= clSetKernelArg(_desired_kernel, 2, sizeof(cl_mem), &device_input_dest_x);
  err |= clSetKernelArg(_desired_kernel, 3, sizeof(cl_mem), &device_input_dest_y);
  err |= clSetKernelArg(_desired_kernel, 4, sizeof(cl_mem), &device_input_radius);
  err |= clSetKernelArg(_desired_kernel, 5, sizeof(unsigned int), &num_agents);
  err |= clSetKernelArg(_desired_kernel, 6, sizeof(cl_mem), &device_output_agent_x);
  err |= clSetKernelArg(_desired_kernel, 7, sizeof(cl_mem), &device_output_agent_y);
  err |= clSetKernelArg(_desired_kernel, 8, sizeof(cl_mem), &device_output_desired_x);
  err |= clSetKernelArg(_desired_kernel, 9, sizeof(cl_mem), &device_output_desired_y);
  err |= clSetKernelArg(_desired_kernel, 10, sizeof(cl_mem), &device_output_reached_destination);
  check_error(err, "bind_kernel_argument");

  // Number of work items in each local work group
  size_t local_size = LOCAL_SIZE;   // ???

  // Number of total work items - localSize must be devisor
  size_t global_size = ceil(num_agents/(float)local_size)*local_size;

  // Execute the kernel over the entire range of the data set
  err = clEnqueueNDRangeKernel(_queue, _desired_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);
  check_error(err, "clEnqueueNDRangeKernel(_queue, _update_kernel, 1, NULL, &global_size, &local_size, 0, NULL, NULL);");

  // Read the results from the device
  err = clEnqueueReadBuffer(_queue, device_output_agent_x, CL_FALSE, 0, num_agents*sizeof(int), vector.position.x, 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

  err = clEnqueueReadBuffer(_queue, device_output_agent_y, CL_FALSE, 0, num_agents*sizeof(int), vector.position.y, 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

  err = clEnqueueReadBuffer(_queue, device_output_desired_x, CL_FALSE, 0, num_agents*sizeof(int), vector.desired.x, 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

  err = clEnqueueReadBuffer(_queue, device_output_desired_y, CL_FALSE, 0, num_agents*sizeof(int), vector.desired.y, 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

  err = clEnqueueReadBuffer(_queue, device_output_reached_destination, CL_FALSE, 0, num_agents*sizeof(bool), reached_destination, 0, NULL, NULL );
  check_error(err, "clEnqueueReadBuffer(_queue, device_output_heatmap, CL_FALSE, 0, heatmap_size*sizeof(int), heatmap[0], 0, NULL, NULL );");

  err = clFinish(_queue);
  check_error(err, "clFinish(_queue);");
}










void Ped::Model::wait_for_opencl_to_finish() {
  cl_int err = clFinish(_queue);
  check_error(err, "clFinish(_queue);");
}

void Ped::Model::update_heatmap_opencl() {
#ifdef TIME_OPENCL
  std::chrono::time_point<std::chrono::system_clock> start, stop;
  start = std::chrono::system_clock::now();
#endif
  fade_heatmap();
#ifdef TIME_OPENCL
  stop = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed = stop - start;
  cout << "Time for fade heatmap: " << elapsed.count() << endl;
#endif

#ifdef TIME_OPENCL
  start = std::chrono::system_clock::now();
#endif
  update_heatmap();
#ifdef TIME_OPENCL
  stop = std::chrono::system_clock::now();
  elapsed = stop - start;
  cout << "Time for update heatmap: " << elapsed.count() << endl;
#endif

#ifdef TIME_OPENCL
  start = std::chrono::system_clock::now();
#endif
  scale_heatmap();
#ifdef TIME_OPENCL
  stop = std::chrono::system_clock::now();
  elapsed = stop - start;
  cout << "Time for scale heatmap: " << elapsed.count() << endl;
#endif

#ifdef TIME_OPENCL
  start = std::chrono::system_clock::now();
#endif
  blur_heatmap();
#ifdef TIME_OPENCL
  stop = std::chrono::system_clock::now();
  elapsed = stop - start;
  cout << "Time for blur heatmap: " << elapsed.count() << endl;
#endif
}

void Ped::Model::destroy_opencl_programs() {

}

void Ped::Model::kill_opencl() {
  // release OpenCL resources
  clReleaseProgram(_program);
  clReleaseKernel(_fade_kernel);
  clReleaseKernel(_update_kernel);
  clReleaseKernel(_scale_kernel);
  clReleaseKernel(_blur_kernel);
  clReleaseCommandQueue(_queue);
  clReleaseContext(_context);
}









//============================================================================
const char *err_code (cl_int err_in)
{
    switch (err_in) {
        case CL_SUCCESS:
            return (char*)"CL_SUCCESS";
        case CL_DEVICE_NOT_FOUND:
            return (char*)"CL_DEVICE_NOT_FOUND";
        case CL_DEVICE_NOT_AVAILABLE:
            return (char*)"CL_DEVICE_NOT_AVAILABLE";
        case CL_COMPILER_NOT_AVAILABLE:
            return (char*)"CL_COMPILER_NOT_AVAILABLE";
        case CL_MEM_OBJECT_ALLOCATION_FAILURE:
            return (char*)"CL_MEM_OBJECT_ALLOCATION_FAILURE";
        case CL_OUT_OF_RESOURCES:
            return (char*)"CL_OUT_OF_RESOURCES";
        case CL_OUT_OF_HOST_MEMORY:
            return (char*)"CL_OUT_OF_HOST_MEMORY";
        case CL_PROFILING_INFO_NOT_AVAILABLE:
            return (char*)"CL_PROFILING_INFO_NOT_AVAILABLE";
        case CL_MEM_COPY_OVERLAP:
            return (char*)"CL_MEM_COPY_OVERLAP";
        case CL_IMAGE_FORMAT_MISMATCH:
            return (char*)"CL_IMAGE_FORMAT_MISMATCH";
        case CL_IMAGE_FORMAT_NOT_SUPPORTED:
            return (char*)"CL_IMAGE_FORMAT_NOT_SUPPORTED";
        case CL_BUILD_PROGRAM_FAILURE:
            return (char*)"CL_BUILD_PROGRAM_FAILURE";
        case CL_MAP_FAILURE:
            return (char*)"CL_MAP_FAILURE";
        case CL_MISALIGNED_SUB_BUFFER_OFFSET:
            return (char*)"CL_MISALIGNED_SUB_BUFFER_OFFSET";
        case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
            return (char*)"CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST";
        case CL_INVALID_VALUE:
            return (char*)"CL_INVALID_VALUE";
        case CL_INVALID_DEVICE_TYPE:
            return (char*)"CL_INVALID_DEVICE_TYPE";
        case CL_INVALID_PLATFORM:
            return (char*)"CL_INVALID_PLATFORM";
        case CL_INVALID_DEVICE:
            return (char*)"CL_INVALID_DEVICE";
        case CL_INVALID_CONTEXT:
            return (char*)"CL_INVALID_CONTEXT";
        case CL_INVALID_QUEUE_PROPERTIES:
            return (char*)"CL_INVALID_QUEUE_PROPERTIES";
        case CL_INVALID_COMMAND_QUEUE:
            return (char*)"CL_INVALID_COMMAND_QUEUE";
        case CL_INVALID_HOST_PTR:
            return (char*)"CL_INVALID_HOST_PTR";
        case CL_INVALID_MEM_OBJECT:
            return (char*)"CL_INVALID_MEM_OBJECT";
        case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
            return (char*)"CL_INVALID_IMAGE_FORMAT_DESCRIPTOR";
        case CL_INVALID_IMAGE_SIZE:
            return (char*)"CL_INVALID_IMAGE_SIZE";
        case CL_INVALID_SAMPLER:
            return (char*)"CL_INVALID_SAMPLER";
        case CL_INVALID_BINARY:
            return (char*)"CL_INVALID_BINARY";
        case CL_INVALID_BUILD_OPTIONS:
            return (char*)"CL_INVALID_BUILD_OPTIONS";
        case CL_INVALID_PROGRAM:
            return (char*)"CL_INVALID_PROGRAM";
        case CL_INVALID_PROGRAM_EXECUTABLE:
            return (char*)"CL_INVALID_PROGRAM_EXECUTABLE";
        case CL_INVALID_KERNEL_NAME:
            return (char*)"CL_INVALID_KERNEL_NAME";
        case CL_INVALID_KERNEL_DEFINITION:
            return (char*)"CL_INVALID_KERNEL_DEFINITION";
        case CL_INVALID_KERNEL:
            return (char*)"CL_INVALID_KERNEL";
        case CL_INVALID_ARG_INDEX:
            return (char*)"CL_INVALID_ARG_INDEX";
        case CL_INVALID_ARG_VALUE:
            return (char*)"CL_INVALID_ARG_VALUE";
        case CL_INVALID_ARG_SIZE:
            return (char*)"CL_INVALID_ARG_SIZE";
        case CL_INVALID_KERNEL_ARGS:
            return (char*)"CL_INVALID_KERNEL_ARGS";
        case CL_INVALID_WORK_DIMENSION:
            return (char*)"CL_INVALID_WORK_DIMENSION";
        case CL_INVALID_WORK_GROUP_SIZE:
            return (char*)"CL_INVALID_WORK_GROUP_SIZE";
        case CL_INVALID_WORK_ITEM_SIZE:
            return (char*)"CL_INVALID_WORK_ITEM_SIZE";
        case CL_INVALID_GLOBAL_OFFSET:
            return (char*)"CL_INVALID_GLOBAL_OFFSET";
        case CL_INVALID_EVENT_WAIT_LIST:
            return (char*)"CL_INVALID_EVENT_WAIT_LIST";
        case CL_INVALID_EVENT:
            return (char*)"CL_INVALID_EVENT";
        case CL_INVALID_OPERATION:
            return (char*)"CL_INVALID_OPERATION";
        case CL_INVALID_GL_OBJECT:
            return (char*)"CL_INVALID_GL_OBJECT";
        case CL_INVALID_BUFFER_SIZE:
            return (char*)"CL_INVALID_BUFFER_SIZE";
        case CL_INVALID_MIP_LEVEL:
            return (char*)"CL_INVALID_MIP_LEVEL";
        case CL_INVALID_GLOBAL_WORK_SIZE:
            return (char*)"CL_INVALID_GLOBAL_WORK_SIZE";
        case CL_INVALID_PROPERTY:
            return (char*)"CL_INVALID_PROPERTY";

        default:
            return (char*)"UNKNOWN ERROR";
    }
}


void _check_error(cl_int err, const char *operation, const char *filename, int line)
{
    if (err != CL_SUCCESS)
    {
        printf("Error during operation '%s', ", operation);
        printf("in '%s' on line %d\n", filename, line);
        printf("Error code was \"%s\" (%d)\n", err_code(err), err);
        exit(EXIT_FAILURE);
    }
}
