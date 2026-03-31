#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("%d\n", rand());             // Generate a random number
    printf("RAND_MAX: %d\n", RAND_MAX); // Print the maximum value for rand()

    srand(time(NULL));

    printf("%d\n", rand() % 100); // Generate a random number between 0 and 99

    float min = 1;
    float max = 100;

    int randomNum = (rand() % ((int)max - (int)min + 1)) + min; // Generate a random number between min and max
    printf("%d\n", randomNum);

    return 0;
}