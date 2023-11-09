#include <stdio.h>
#include <string.h>

// Project: Example 1: Storing information about a student
struct Student
{
    char name[20];
    int age;
    float grade;
};

int main()
{
    // Create a Student variable.
    struct Student student1;

    // Set the values of the struct members.
    strcpy(student1.name,"John Doe");
    student1.age = 18;
    student1.grade = 90.0;

    // Print the values of the struct members.
    printf("-----------------------------------------------\n");
    printf("Student 1 name: %s\n", student1.name);
    printf("Student age: %d\n", student1.age);
    printf("Student grade: %.2f\n", student1.grade);
    printf("-----------------------------------------------\n");

    return 0;
}
