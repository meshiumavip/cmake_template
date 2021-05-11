#ifndef SYSTEM
#define SYSTEM

#include <stdio.h>
#include <stdint.h>

#define LOG(...)        debug_log(__FILE__, __LINE__, __func__, __VA_ARGS__)
#define INPUT(...)      printf("入力："), scanf("%d", &__VA_ARGS__)

int32_t debug_log(char *filename, int32_t line, const char *funcname, char *str);
#endif