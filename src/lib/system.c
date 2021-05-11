#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "system.h"
#include "error.h"

int32_t template_logger(char *filename, int32_t line, const char *funcname, char *str){
    FILE *file;
    if ((file = fopen("cliquest.log" , "a")) == NULL) {
        printf("ファイルが開けませんでした");
        return INTERNAL_ERROR;
    }
    fprintf(file , "%s:%d %s() :%s\n", filename, line, funcname, str);
    fclose(file);
    return 0;
}