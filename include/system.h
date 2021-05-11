#ifndef SYSTEM
#define SYSTEM

#include <stdio.h>
#include <stdint.h>

#define template_log(...) \
        template_logger(__FILE__, __LINE__, __func__, __VA_ARGS__)

int32_t template_logger(char *filename, int32_t line, const char *funcname, char *str);

#endif //SYSTEM