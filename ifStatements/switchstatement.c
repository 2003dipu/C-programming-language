#include<stdio.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade); // address of grade variable &

    switch (grade)
    {
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did okay");
        break;
    case 'D':
        printf("At least it's not an F!");
        break;
    case 'F':
        printf("You failed! Don't panic. You can do it next time");
        break;
        
    default:
        printf("Please enter a valid grade(A, B, C, D, F!");
        break;
    }

    return 0;
}