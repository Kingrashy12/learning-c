#include <stdio.h>
#include <stdbool.h>


//This code demonstrates the use of various variable types in C, including integers, floating-point numbers, characters, and boolean values. It also shows how to print these variables using the printf function. The program outputs information about a person's age, GPA, the value of pi, temperature, name, student ID, grade, and enrollment status.
 
// int - used to store whole numbers
// float - used to store decimal numbers with single precision
// double - used to store decimal numbers with double precision
// char - used to store single characters
// char[] - used to store strings
// bool - used to store boolean values (true or false)


int main() {
    int age = 30;
    float gpa = 3.5;
    double pi = 3.14159;
    float temperature = -25.5;
    printf("Hello, I am %d years old\n", age);
    printf("My GPA is %.2f\n", gpa);
    printf("The value of pi is approximately %.3lf\n", pi);
    printf("The temperature is %.1f°F\n", temperature);

    char name[] = "John";
    printf("My name is %s\n", name);

    int student_id = 12345;
    printf("My student ID is %d\n", student_id);

    char grade = 'A';
    printf("My grade is %c\n", grade);

    bool is_enrolled = true;

    printf("Am I enrolled? %s\n", is_enrolled ? "Yes" : "No");

    return 0;
}