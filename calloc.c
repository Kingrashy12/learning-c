#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number = 0;

    printf("Enter number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if (scores == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter score for player #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("Player #%d: %d\n", i + 1, scores[i]);
    }

    free(scores);
    scores = NULL; // Avoid dangling pointer

    return 0;
}