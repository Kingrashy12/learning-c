#include <stdio.h>

void birthday(int *age);

int main()

{
    int age = 22;

    printf("Age: %d\n", age);
    printf("Address of age: %p\n", &age);

    birthday(&age);
    printf("Age after birthday: %d\n", age);

    return 0;
}

void birthday(int *age)
{
    (*age)++;
}