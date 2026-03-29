#include <stdio.h>
#include <string.h>

/*
 * Reads a line from stdin and removes the trailing newline character.
 */
void fgets_and_strlen(char *str, size_t size)
{
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}