#include <stdio.h>

int main()
{

    char fruits[][12] = {"Apple", "Banana", "Cherry", "Pineapple", "Grapes"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%s ", fruits[i]);
    }

    return 0;
}