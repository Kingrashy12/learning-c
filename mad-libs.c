#include <stdio.h>
#include <string.h>
#include "utils.h"

int main()
{
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets_and_strlen(adjective1, sizeof(adjective1));

    printf("Enter a noun (animal or person): ");
    fgets_and_strlen(noun, sizeof(noun));

    printf("Enter an adjective (description): ");
    fgets_and_strlen(adjective2, sizeof(adjective2));

    printf("Enter a verb (ending w/ -ing): ");
    fgets_and_strlen(verb, sizeof(verb));

    printf("Enter an adjective (description): ");
    fgets_and_strlen(adjective3, sizeof(adjective3));

    printf("\nToday i went to a %s zoo.\n", adjective1);
    printf("In a exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s\n", adjective3);

    return 0;
}