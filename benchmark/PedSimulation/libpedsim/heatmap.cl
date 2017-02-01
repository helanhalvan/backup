__kernel void fade_heatmap(__global int* heatmap, __read_only const unsigned int n) {
  //Get our global thread ID
  int id = get_global_id(0);

  //Make sure we do not go out of bounds
  if (id < n) {
    heatmap[id] *= 0.80;
  }
}

__kernel void update_heatmap(
    __global __read_only float* agent_x,
    __global __read_only float* agent_y,
    __read_only const unsigned int num_agents,
    __global int* heatmap,
    __read_only const unsigned int w
    , __read_only const unsigned int h) {

  //Get our global thread ID
  int id = get_global_id(0);


  //Make sure we do not go out of bounds
  if (id < num_agents) {
    int x = agent_x[id];
    int y = agent_y[id];

    if(0 <= x && x < w && 0 <= y && y < h)
    {
      atomic_add(&heatmap[y*w+x], 40 );
      atomic_min(&heatmap[y*w+x], 255 );
    }

    // intensify heat for better color results

  }

}

__kernel void scale_heatmap(
    __global __read_only int* heatmap,
    __global __write_only int* scaled_heatmap,
    __read_only unsigned int n,
    __read_only const unsigned int w,
    __read_only const unsigned int h) {

  //Get our global thread ID
  int id = get_global_id(0);
  const int scale = 5;


  //Make sure we do not go out of bounds
  if (id < n) {
    int value = heatmap[id];
    int x = id % w;
    int y = id / w;
    int sx = scale * x;
    int sy = scale * y;
    int sw = scale * w;
    int sh = scale * h;
    for (int r = 0; r < scale; ++r) {
      for (int c = 0; c < scale; ++c) {
        scaled_heatmap[(sy+r)*(sw)+(sx+c)] = value;
      }
    }
  }
}

__kernel void blur_heatmap(
    __global __read_only int* scaled_heatmap,
    __global __write_only int* blurred_heatmap,
    __read_only const unsigned int w,
    __read_only const unsigned int h) {

  //Get our global thread ID
  int id = get_global_id(0);
  int x = id % w;
  int y = id / w;

  const int weightsum = 273;
  const int weight[5][5] = {
    {1,4,7,4,1},
    {4,16,26,16,4},
    {7,26,41,26,7},
    {4,16,26,16,4},
    {1,4,7,4,1}};

  //Make sure we do not go out of bounds
  if (2 < x < w-2 && 2 < y && y < h-2) {
    int sum = 0;
    for (int r = -2; r < 3; ++r) {
      for (int c = -2; c < 3; ++c) {
        sum += weight[2 + r][2 + c] * scaled_heatmap[(y + r)*w + x + c];
      }
    }
    int value = sum/weightsum;
    blurred_heatmap[id] = 0x00FF0000 | value<<24 ;
  }
}

__kernel void desired_position(
    __global __read_only float* agent_x,
    __global __read_only float* agent_y,
    __global __read_only float* dest_x,
    __global __read_only float* dest_y,
    __global __read_only float* radius,
    const unsigned int num_agents,
    __global __write_only float* out_agent_x,
    __global __write_only float* out_agent_y,
    __global __write_only float* desired_x,
    __global __write_only float* desired_y,
    __global __write_only bool* reached_destination) {

  //Get our global thread ID
  int id = get_global_id(0);

  //Make sure we do not go out of bounds
  if (id < num_agents) {
    float x = agent_x[id];
    float y = agent_y[id];

    float destination_x = dest_x[id];
    float destination_y = dest_y[id];
    float r = radius[id];

    float diffX = destination_x - x;
    float diffY = destination_y - y;
    float length = sqrt(diffX * diffX + diffY * diffY);

    int new_x = round(x + diffX / length);
    int new_y = round(y + diffY / length);

    desired_x[id] = new_x;
    desired_y[id] = new_y;

    out_agent_x[id] = new_x;
    out_agent_y[id] = new_y;

    reached_destination[id] = length < r;
  }
}
