// pass by value example
#include <stdio.h>

void increment5(int a)
{
    printf("%d Incremented by 5 = ", a);
    a += 5;
    printf("%d \n", a);
}
void decrement1(int a)
{
    a--;
    printf("%d", a);
}
int increment2(int a)
{
    a = 0;
    a += 2;
    return a;
}
int decrement2(int a)
{
    a = 0;
    a -= 2;
    return a;
}
int main()
{
    int a = 2;
    int b = 3;
    increment2(a); // a = 4 (a is incremented and only accessible in this line. The next lines doesn't get the incremented value)
    increment5(a); // incremented a is only accessible in this line

    printf("a = %d \nb = %d", a, b); // a = 2

    return 0;
}