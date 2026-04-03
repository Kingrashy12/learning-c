#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main()
{

    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {0};

    strcpy(student3.name, "Sandy");
    student3.age = 27;
    student3.gpa = 8.4;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", student.isFullTime ? "Yes" : "No");

    printf("\n");
};