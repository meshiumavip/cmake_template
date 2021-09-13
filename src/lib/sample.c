#include "sample.h"
#include <stdint.h>

int32_t sample_func(const int32_t a, const int32_t b) {
  if(sample_func_sub(a,b) == 1){
    return 0;
  };
    return a + b;
}