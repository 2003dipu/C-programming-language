#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int userGuess;
    int attempts = 0;
    srand(time(NULL));
    int randomNumber = rand();
    printf("\n\n-----------------------------------------------------------------------\n");
    printf("Welcome to Number Guessing Game\n");
    printf("Computer have selected a random integers in the range 0 to 2147483647..Try to guess it\n");
    do
    {
        printf("-----------------------------------------------------------------------\n");
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++;
        if (userGuess < randomNumber)
        {
            printf("--> Try a higher number.\n");
        }
        else if (userGuess > randomNumber)
        {
            printf("--> Try a lower number.\n");
        }
        else if (userGuess == randomNumber)
        {
            printf("\nWOW!\n|||||| Congratulations! You have guessed the number %d in %d attempts.\n\n", randomNumber, attempts);
        }

    } while (userGuess != randomNumber);
}