#include <stdio.h>
#include <string.h>

int main()
{
    // array = a data structure that can share many values of the same data type.
    double prices[] = {5.0, 6.54, 10.0, 25.8, 32.0};

    int length = sizeof(prices)/ sizeof(prices[0]);
    printf("Length of the array = %d \n", length);
    printf("$%.2lf \n", prices[4]);
    return 0;
}