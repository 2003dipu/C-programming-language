#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[15];
    float gpa;
    int age;
} Student;

int main()
{
    printf("\n");

    Student student1 = {"Liton Singha", 3.0, 42};
    Student student2 = {"Ripon Singha", 4.0, 50};
    Student student3 = {"Suchona Sinha", 4.5, 36};
    Student student4 = {"Chayon Singha", 5.0, 39};
    Student student5 = {"Dipto Singha", 4.67, 25};

    Student students[] = {student1, student2, student3, student4, student5};
    printf("Student names\t|GPA |\t|Age\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%.15s\t|", students[i].name);
        printf("%.2f|\t|", students[i].gpa);
        printf("%d|\n", students[i].age);
        printf("___________________________________________________________\n");
    }

    printf("\n");

    return 0;
}