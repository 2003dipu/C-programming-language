#include <stdio.h>
#include <stdbool.h>

// logical operator = !(NOT) reverses the state of a condition
int main()
{
    bool sunny = false;

    if (!sunny)
    {
        printf("It's cloudy outside\n");
    }
    else
    {
        printf("It's sunny outside\n");
    }
}