// Project Name: Example 2: Passing structs to functions
#include <string.h>
#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float grade;
};

void print_student(struct Student student1)
{
    printf("-----------------------------------------------\n");
    printf("Student 1 name: %s\n", student1.name);
    printf("Student 1 age: %d\n", student1.age);
    printf("Student 1 grade: %.2f\n", student1.grade);
    printf("-----------------------------------------------\n");
}

int main()
{
    // Create a Student variable.
    struct Student student1;

    // Set the values of the struct members.
    strcpy(student1.name, "John Doe");
    student1.age = 18;
    student1.grade = 90.0;

    // Pass the Student variable to the print_student() function.
    print_student(student1);

    return 0;
}
