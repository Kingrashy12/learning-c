#include <stdio.h>
#include <windows.h>

int main()
{
    // A loop is a programming construct that allows you to repeat a block of code multiple times. In C, there are three main types of loops: for, while, and do-while.

    // For Loop
    printf("For Loop:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    // While Loop
    printf("\nWhile Loop:\n");
    int j = 0;
    while (j < 5)
    {
        printf("%d\n", j);
        j++;
    }

    // Do-While Loop
    printf("\nDo-While Loop:\n");
    int k = 0;
    do
    {
        printf("%d\n", k);
        k++;
    } while (k < 5);

    printf("\nLoop with sleep\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        Sleep(1000); // Sleep for 1000 milliseconds (1 second)
    }

    printf("Multiplication Table:\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%5d", i * j);
        }
        printf("\n");
    }

    return 0;
}