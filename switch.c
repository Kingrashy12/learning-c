#include <stdio.h>

int main()
{
    // A switch statement is an alternative to using multiple if-else statements when you have a variable that can take on multiple discrete values. It allows you to execute different blocks of code based on the value of the variable.

    char dayOfWeek = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf(" %c", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 'M':
        printf("Monday\n");
        break;
    case 'T':
        printf("Tuesday\n");
        break;
    case 'W':
        printf("Wednesday\n");
        break;
    case 'R':
        printf("Thursday\n");
        break;
    case 'F':
        printf("Friday\n");
        break;
    case 'S':
        printf("Saturday\n");
        break;
    case 'U':
        printf("Sunday\n");
        break;
    default:
        printf("Please enter a valid day of the week (M, T, W, R, F, S, U).\n");
    }

    return 0;
}
