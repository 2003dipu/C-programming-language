#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\nProject: Generate Random Number\n\n");

    // pseudo random numbers = A set of values or elements that are statistically random(Don't use these for any 
    //sort of cryptographic security)
    srand(time(0));
    int number1 = (rand()% 6)+1;
    int number2 = (rand()% 6)+1;
    int number3 = (rand()% 6)+1;
    int randomNum = rand() % 100 + 1; // Generates a number between 1 and 100

    printf("Random Number: %d\n", number1);
    printf("Random Number: %d\n", number2);
    printf("Random Number: %d\n", number3);
    printf("Random Number: %d\n", randomNum);
    printf("Random Number: %d\n", rand() % 100 + 1);// this is also valid in C


    return 0;
}