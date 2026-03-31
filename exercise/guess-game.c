#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int tries = 0;
    int guess = 0;
    int min = 1;
    int max = 100;

    srand(time(NULL));
    int answer = (rand() % (max - min + 1)) + min;

    printf("🎮 Welcome to Guess the Number!\n");
    printf("I'm thinking of a number between %d - %d.\n", min, max);

    return 0;
}