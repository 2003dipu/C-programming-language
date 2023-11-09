#include <stdio.h>

void printAge(int *age)
{
    printf("\n\n");
    printf("You are %d years old.\n", *age); // dereference
    printf("\n\n");
}

int main()
{
    /* 
    pointers = a "variable-like" reference that holds a memory address to another variable, array, etc.
    some tasks are performed more easily with pointers
    * = indirection operator (value at address)

    Advantage of using pointers
    1. Less time in progress execution
    2 . Working on the original variable
    3. WIth the help of pointers, we can create data structures (linked-list, stack, queue).
    4. Returning more than one values from functions.
    5. Searching and sorting large data very easily.
    6. Dynamically memory allocation
     */

    int age = 21;
    int *pAge = NULL;
    pAge = &age;
    /*

    printf("Address of age: %p \n", &age);
    printf("value of pAge:  %p \n", pAge);

    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d \n", age);
    printf("value at stored address: %d \n", *pAge);
    */

    printAge(pAge);

    return 0;
}