// pass by value example
#include <stdio.h>

void PrintIncrement5(int *a)
{
    printf("%d Incremented by 5 = ", *a);
    *a += 5;
    printf("%d \n", *a);
}
void PrintDecrement1(int *a)
{
    *a--;
    printf("%d", *a);
}
int increment9(int *a)
{
    *a += 9;
    return *a;
}
int decrement2(int *a)
{
    *a -= 2;
    return *a;
}
int main()
{
    int a = 1;
    int b = 3;
    increment9(&a); // a = 1 is passed by reference, a = 1 + 9 = 10
    PrintIncrement5(&a); // a = 4 is passed by reference, a = 4 + 5 = 9 (incrementd a is accessible to the next lines of code)

    printf("a = %d \nb = %d", a, b); // a = 2

    return 0;
}