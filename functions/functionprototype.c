#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{
    // function prototype = is a function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments
    char name[] = "Rosmi Sinha";
    int age = 17;
    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s. You are %d years old\n", name, age);
}