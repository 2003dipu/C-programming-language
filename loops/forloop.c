#include <stdio.h>

// for loop = repeats a secetion of code a limited amount of times
void printNumbers()
{
    int i;
    for (i = 0; i <= 19; i++)
    {
        printf("%d < ", i);
    }
    printf("%d", i);
}

int main()
{
    printNumbers();

    return 0;
}