#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "system.h"
#include "sample.h"

void main() {
    template_log("test");
    printf("sum %d", sample_func(1, 2));
}