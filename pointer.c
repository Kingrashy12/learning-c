#include <stdio.h>

void birthday(int *age);
int add(int a, int b);
void greetMorning();
void greetEvening();
void greet(void (*func)());
void runCallback(void (*callback)());
void sayHello();
void calculate(void (*callback)(int, int), int x, int y);
void addNumbers(int a, int b);

int main()

{
    int age = 22;

    printf("Age: %d\n", age);
    printf("Address of age: %p\n", &age);

    birthday(&age);
    printf("Age after birthday: %d\n", age);

    int (*ptr)(int, int) = add;
    int result = ptr(5, 3);
    printf("Result: %d\n", result);

    greet(greetMorning);
    greet(greetEvening);

    runCallback(sayHello);

    calculate(addNumbers, 5, 3);

    return 0;
}

void birthday(int *age)
{
    (*age)++;
}

int add(int a, int b)
{
    return a + b;
}

void greetMorning() { printf("Good morning!\n"); }
void greetEvening() { printf("Good evening!\n"); }

void greet(void (*func)())
{
    func();
}

void sayHello()
{
    printf("Hello from the callback!\n");
}

void runCallback(void (*callback)())
{
    printf("Before calling the callback...\n");
    callback();
    printf("After calling the callback.\n");
}

void addNumbers(int a, int b)
{
    printf("The sum is: %d\n", a + b);
}

void calculate(void (*callback)(int, int), int x, int y)
{
    callback(x, y);
}
