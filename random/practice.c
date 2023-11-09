#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

void rollDice()
{
    srand(time(NULL));
    int randomNumber1 = rand() % 6 + 1;
    int randomNumber2 = rand() % 6 + 1;
    int randomNumber3 = rand() % 6 + 1;
    int randomNumber4 = rand() % 6 + 1;
    int randomNumber5 = rand() % 6 + 1;
    int randomNumber6 = rand() % 6 + 1;

    int rnA[] = {randomNumber1, randomNumber2, randomNumber3, randomNumber4, randomNumber5, randomNumber6};
    int counter = 0;
    for (int i = 0; i < sizeof(rnA) / sizeof(rnA[0]); i++)
    {
        switch (rnA[i])
        {
        case 1:
            printf("1'st Roll: You rolled a 1\n");
            break;
        case 2:
            printf("2'nd Roll: You rolled a 2\n");
            break;
        case 3:
            printf("3'rd Roll: You rolled a 3\n");
            break;
        case 4:
            printf("4'th Roll: You rolled a 4\n");
            break;
        case 5:
            printf("5'th Roll: You rolled a 5\n");
            break;
        case 6:
            printf("6'th Roll: You rolled a 6\n");
            break;

        default:
            printf("Something went wrong !\n");
            break;
        }
        if (rnA[0] == rnA[1] && rnA[1] == rnA[2] && rnA[2] == rnA[3] && rnA[3] == rnA[4] && rnA[4] == rnA[5])
        {
            printf("Luckily you rolled six 6's\n");
        }
    }
}

void decide()
{
    char userChoice[5];
    printf("Type 'roll' to roll six dices: -> ");
    scanf(" %s", &userChoice);

    if (strcmp(userChoice, "roll") == 0)
    {
        rollDice();
    }
    else
    {
        printf("Enter 'roll' to roll six dices\n");
    }
}

int main()
{
    decide();

    return 0;
}