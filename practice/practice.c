#include <stdio.h>

/*
Memoization = is a technique used in computer science to optimize the performance of functions that are called
frequently with the same inputs. It involves storing the results of expensive function calls and returning the
cached result when the same input occur again. This can help reduce redundant computations and improve the
efficiency of algorithms. Memoization is commonly used in dynamic programming and recursive algorithms
to speed up their execution.

0 1 1 2 3 5 8 13 21 34 56 90...............

*/
long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    printf("\n\n");
    int n = 50; // 50 th fibonacci number is 12'586'269'025. ( within 1 minute 42 seconds by Recursive Function)
    printf("%lld \n", fibonacci(n));

    printf("\n\n");

    return 0;
}