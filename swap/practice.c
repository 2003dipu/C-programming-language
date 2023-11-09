#include <stdio.h>
#include <string.h>

int main()
{
    printf("\nSwapping values of two variables\n\n");

    char p[15] = "Water";
    char q[15] = "Milk";
    char temp[15];

    strcpy(temp, p); // swapped
    strcpy(p, q);
    strcpy(q, temp);

    printf("p = %s \n", p);
    printf("q = %s \n", q);


    return 0;
}