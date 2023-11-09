#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// int randomNumber = (rand() % (upperBound - lowerBound + 1)) + lowerBound;

int main()
{
    /*
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 0 and RAND_MAX (usually a large value)
    int randomNum = rand();

    printf("Random number: %d\n", randomNum);
    */
    // Initialize the random number generator.
    srand(time(NULL));

    // Generate a random number between 50 and 500.
    int randomNumber = (rand() % (500 - 50 + 1)) + 50;

    // Print the random number.
    printf("The random number is: %d\n", randomNumber);

    return 0;
}
