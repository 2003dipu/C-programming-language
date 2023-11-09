/*
variables = Allocated space in memory to store a value. We refer to a variable's name to access the stored value.
That variable now behaves as if it was the value it contains. But we need to declare what type of data we
are storing.
*/
#include <stdio.h>

int main()
{
    int x;                // declaration
    x = 5;                // initialization
    int y = 8;            // declaration and initialization
    int age = 20;         // integer
    float gpa = 3.67;     // floating point number
    char grade = 'A';     // single character
    char name[] = "Dipu"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is: %c\n", grade);

    return 0;
}