
#include "common.h"

__kernel void vecadd ( __global TYPE *C)
{
  int gid = get_global_id(0);
  C[gid] = 0+0;
}
