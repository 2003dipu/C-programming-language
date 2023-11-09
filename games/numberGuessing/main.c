#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int uguess, attempts, answer;

    // uses the current time as a seed
    srand(time(NULL));
    answer = rand();
    do
    {
        printf("\n\nEnter your guess: ");
        scanf("%d", &uguess);
        attempts++;
        if (uguess > answer)
        {
            printf("Hmm....Too high!\n");
        }
        else if (uguess < answer)
        {
            printf("Hmm....Too low!\n");
        }
        else if (uguess == answer)
        {
            printf("Hmm.... Correct!\nYou did it in %d attemps", attempts);
        }
        else
        {
            printf("Enter a valid integer.\n");
        }

    } while (uguess != answer);

    return 0;
}