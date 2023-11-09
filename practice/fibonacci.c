#include <stdio.h>

int fib(int index)
{
    if (0 == index)
    {
        return 1;
    }
    else if (1 == index)
    {
        return 2;
    }
    else
    {
        return fib(index - 1) + fib(index - 2);
    }
}

int main()
{
    int i;
    i = 0;
    while (1)
    {
        printf("The next fib number is %d \n", fib(i));
        i++;
    }

    return 0;
}