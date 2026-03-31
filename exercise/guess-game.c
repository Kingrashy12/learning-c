#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{

    SetConsoleOutputCP(CP_UTF8); // Set console output code page to UTF-8

    int tries = 0;
    int guess = 0;
    int min = 1;
    int max = 100;

    srand(time(NULL));
    int answer = (rand() % (max - min + 1)) + min;

    printf("🎮 Welcome to Guess the Number!\n");
    printf("I'm thinking of a number between %d - %d.\n", min, max);

    while (guess != answer)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > answer)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number in %d tries!\n", tries);
        }
    }

    return 0;
}