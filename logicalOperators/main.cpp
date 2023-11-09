#include<stdio.h>
#include<stdbool.h>

int main()
{
    printf("\nLogical Operators: And(&&), Or(||), Not(!), ternary (?)\n\n");

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("The temperature is good\n");
    }
    
    else
    {
        printf("The temperature is bad\n");
    }
    


    return 0;
}