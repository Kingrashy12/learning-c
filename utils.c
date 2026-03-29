#include "utils.h"

void fgets_and_strlen(char *str, size_t size)
{
    fgets(str, size, stdin);
    str[strlen(str) - 1] = '\0';
}