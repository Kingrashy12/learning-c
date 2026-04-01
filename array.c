#include <stdio.h>

int main()
{

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Alice";

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}