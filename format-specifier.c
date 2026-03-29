#include <stdio.h>

int main()
{
    int age = 22;
    float gpa = 3.8;
    double pi = 3.14159;
    char grade = 'A';
    char name[] = "Alice";

    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Pi: %.3lf\n", pi);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    // Width
    int num = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%4d\n", num);  // Right-aligned with width 4
    printf("%4d\n", num2); // Right-aligned with width 4
    printf("%4d\n", num3); // Right-aligned with width 4

    printf("Width example: |%10s|\n", name);  // Right-aligned with width 10
    printf("Width example: |%-10s|\n", name); // Left-aligned with width 10

    // Precision

    float price = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.2f\n", price);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}