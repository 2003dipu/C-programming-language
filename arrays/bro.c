#include <stdio.h>

int main()
{
    double prices[] = {23.66, 85.99, 100.00, 33.33, 10.06, 55.67};

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\t", prices[0]);
    }
    
    return 0;
}