#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "sample.h"
#include "system.h"

void main() {
  template_log("test");
  printf("sum %d", sample_func(1, 2));
}