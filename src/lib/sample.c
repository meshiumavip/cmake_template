#include "sample.h"
#include <stdint.h>

int32_t sample_func(const int32_t a, const int32_t b) {
  sample_func_sub();
  return a + b;
}