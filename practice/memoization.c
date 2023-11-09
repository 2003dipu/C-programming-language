#include <stdio.h>

#define MAX 100

long long memo[MAX]; // Array to store computed Fibonacci numbers

long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (memo[n] != 0) // If the value is already computed, return it.
    {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2); // Store the result in the array.
    return memo[n];
}

int main()
{
    int n = 50; // 50 th fibonacci number is 12'586'269'025. ( within 1 second by Memoization)
    printf("%lld\n", fibonacci(n));

    return 0;
}
