#include <stdio.h>
// enums = a user defined type of named integer identifier
// helps to make a program more readable
// declare within the main function or outside the main function
// treated as integers. Not strings
enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    printf("\nProject Name: Enums short for enumeration\n\n");
    enum Day today = Mon;
    // printf("%d", today);
    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Party time!\n");
    }
    else
    {
        printf("I have to work today\n");
    }

    return 0;
}