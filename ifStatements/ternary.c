#include <stdio.h>

double findMax(double x, double y)
{
    return (x > y) ? x : y;
}

int main()
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    double x = 33.0;
    double y = 9.99;
    double maxNum = findMax(x, y);
    printf("Maximum number between %.3lf and %.3lf is %.3lf",x, y, maxNum);

    return 0;
}