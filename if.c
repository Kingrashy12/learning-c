#include <stdio.h>
#include <string.h>
#include "utils.h"

int main()
{
    int age = 0;
    char name[50] = "";
    char message[100] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar(); // Consume the newline character left by scanf
    printf("Enter your name: ");
    fgets_and_strlen(name, sizeof(name));

    if (age >= 65)
        strcpy(message, "You are a senior citizen.\n");
    else if (age >= 18)
        strcpy(message, "You are an adult.\n");
    else if (age < 0)
        strcpy(message, "You have not been born yet.\n");
    else if (age == 0)
        strcpy(message, "You are a newborn.\n");
    else
        strcpy(message, "You are a child.\n");

    if (strlen(name) == 0)
        printf("You did not enter a name.\n");
    else
        printf("Hello, %s, %s", name, message);

    return 0;
}