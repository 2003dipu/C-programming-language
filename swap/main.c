#include <stdio.h>

int main()
{
    printf("\nSwapping values of two variables\n\n");

    char p = 'X';
    char q = 'Y';
    char temp;

    temp = p;
    p = q;
    q = temp; // swapped

    printf("X = %c \n", p);
    printf("Y = %c \n", q);


    return 0;
}