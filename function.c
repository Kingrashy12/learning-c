#include <stdio.h>
#include "utils.h"
#include <stdbool.h>

bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void greet(char name[])
{
    printf("Hello, %s!\n", name);
}

int square(int num)
{
    return num * num;
}

int main()
{
    char name[20] = "";

    printf("Enter your name: ");
    fgets_and_strlen(name, sizeof(name));
    greet(name);

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    printf("Enter your age: ");
    int age = 0;
    scanf("%d", &age);

    if (ageCheck(age))
    {
        printf("You may signup\n");
    }
    else
    {
        printf("You must be 18+ to signup\n");
    }

    return 0;
}