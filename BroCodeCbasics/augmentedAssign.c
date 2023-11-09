// augmented assignment operators
#include <stdio.h>

int main()
{
    // augmented assignment operators = used to replace a statement where an operator takes a variable as one of
    // its arguments and then assigns the result back to the same variable x = x + 1; x +=1;
    int x = 10;
    x += 2;
    printf("x = %d\n", x);

    x -= 2;
    printf("x = %d\n", x);

    x *= 2;
    printf("x = %d\n", x);

    x /= 2;
    printf("x = %d\n", x);

    x = x % 2;
    x %= 2;
    printf("x = %d\n", x);

    return 0;
}