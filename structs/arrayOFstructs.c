#include <stdio.h>
#include <string.h>

struct Student
{
    char name[15];
    float gpa;
};

int main()
{
    printf("\n");

    struct Student student1 = {"Liton Singha", 3.0};
    struct Student student2 = {"Ripon Singha", 4.0};
    struct Student student3 = {"Suchona Singha", 4.5};
    struct Student student4 = {"Chayon Singha", 5.0};

    struct Student students[] = {student1, student2, student3, student4};
    printf("Student names\t GPA\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%.15s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
        printf("------------------------\n");
    }

    printf("\n");

    return 0;
}