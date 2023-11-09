#include <stdio.h>

int main()
{
    double prices[5];
    prices[0] = 59.9;
    prices[1] = 5.99;
    prices[2] = 59.9;
    prices[3] = 59.9;
    prices[4] = 30.9;
    prices[5] = 100.9;
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("%.2lf\t", prices[i]);
    }
    
    return 0;
}