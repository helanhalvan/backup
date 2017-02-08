const char* heatmap_cl = "__kernel void fade_heatmap(__global int* heatmap, __read_only const unsigned int n) {\n  //Get our global thread ID\n  int id = get_global_id(0);\n\n  //Make sure we do not go out of bounds\n  if (id < n) {\n    heatmap[id] *= 0.80;\n  }\n}\n\n__kernel void update_heatmap(\n    __global __read_only float* agent_x,\n    __global __read_only float* agent_y,\n    __read_only const unsigned int num_agents,\n    __global int* heatmap,\n    __read_only const unsigned int w\n    , __read_only const unsigned int h) {\n\n  //Get our global thread ID\n  int id = get_global_id(0);\n\n\n  //Make sure we do not go out of bounds\n  if (id < num_agents) {\n    int x = agent_x[id];\n    int y = agent_y[id];\n\n    if(0 <= x && x < w && 0 <= y && y < h)\n    {\n      atomic_add(&heatmap[y*w+x], 40 );\n      atomic_min(&heatmap[y*w+x], 255 );\n    }\n\n    // intensify heat for better color results\n\n  }\n\n}\n\n__kernel void scale_heatmap(\n    __global __read_only int* heatmap,\n    __global __write_only int* scaled_heatmap,\n    __read_only unsigned int n,\n    __read_only const unsigned int w,\n    __read_only const unsigned int h) {\n\n  //Get our global thread ID\n  int id = get_global_id(0);\n  const int scale = 5;\n\n\n  //Make sure we do not go out of bounds\n  if (id < n) {\n    int value = heatmap[id];\n    int x = id % w;\n    int y = id / w;\n    int sx = scale * x;\n    int sy = scale * y;\n    int sw = scale * w;\n    int sh = scale * h;\n    for (int r = 0; r < scale; ++r) {\n      for (int c = 0; c < scale; ++c) {\n        scaled_heatmap[(sy+r)*(sw)+(sx+c)] = value;\n      }\n    }\n  }\n}\n\n__kernel void blur_heatmap(\n    __global __read_only int* scaled_heatmap,\n    __global __write_only int* blurred_heatmap,\n    __read_only const unsigned int w,\n    __read_only const unsigned int h) {\n\n  //Get our global thread ID\n  int id = get_global_id(0);\n  int x = id % w;\n  int y = id / w;\n\n  const int weightsum = 273;\n  const int weight[5][5] = {\n    {1,4,7,4,1},\n    {4,16,26,16,4},\n    {7,26,41,26,7},\n    {4,16,26,16,4},\n    {1,4,7,4,1}};\n\n  //Make sure we do not go out of bounds\n  if (2 < x < w-2 && 2 < y && y < h-2) {\n    int sum = 0;\n    for (int r = -2; r < 3; ++r) {\n      for (int c = -2; c < 3; ++c) {\n        sum += weight[2 + r][2 + c] * scaled_heatmap[(y + r)*w + x + c];\n      }\n    }\n    int value = sum/weightsum;\n    blurred_heatmap[id] = 0x00FF0000 | value<<24 ;\n  }\n}\n\n__kernel void desired_position(\n    __global __read_only float* agent_x,\n    __global __read_only float* agent_y,\n    __global __read_only float* dest_x,\n    __global __read_only float* dest_y,\n    __global __read_only float* radius,\n    const unsigned int num_agents,\n    __global __write_only float* out_agent_x,\n    __global __write_only float* out_agent_y,\n    __global __write_only float* desired_x,\n    __global __write_only float* desired_y,\n    __global __write_only bool* reached_destination) {\n\n  //Get our global thread ID\n  int id = get_global_id(0);\n\n  //Make sure we do not go out of bounds\n  if (id < num_agents) {\n    float x = agent_x[id];\n    float y = agent_y[id];\n\n    float destination_x = dest_x[id];\n    float destination_y = dest_y[id];\n    float r = radius[id];\n\n    float diffX = destination_x - x;\n    float diffY = destination_y - y;\n    float length = sqrt(diffX * diffX + diffY * diffY);\n\n    int new_x = round(x + diffX / length);\n    int new_y = round(y + diffY / length);\n\n    desired_x[id] = new_x;\n    desired_y[id] = new_y;\n\n    out_agent_x[id] = new_x;\n    out_agent_y[id] = new_y;\n\n    reached_destination[id] = length < r;\n  }\n}\n";
const char* move_cl = "__kernel missing(int action){\n}\n";