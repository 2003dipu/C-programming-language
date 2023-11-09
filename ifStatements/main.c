#include <stdio.h>

// if statements in C programming language
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up! ");
    }
    else if (age < 1)
    {
        printf("You can't sign up. You were just born");
    }

    else if (age < 18)
    {
        printf("You must be 18 + to sign up ");
    }
    else
    {
        printf("Invalid input. Enter a valid integer for your age.");
    }

    return 0;
}