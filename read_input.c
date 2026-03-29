#include <stdio.h>
#include <string.h>

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to consume any

    getchar(); // Consume the newline character left in the buffer
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read a string with spaces
    name[strlen(name) - 1] = '\0'; // Remove the newline character added by fgets

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}