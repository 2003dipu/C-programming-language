#include <stdio.h>
#include <string.h>

/*
struct = collection of related members("variables")
they can be of different data types listed under one name is a block of memory
Very SIMILAR to classes in other languages (but no matehods)
*/
struct Player
{
    char name[12];
    int score;
};

int main()
{
    printf("\n\nStructs in C programming language\n\n");

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Rosmi Sinha");
    player1.score = 4;

    strcpy(player2.name, "Anushka Sinha");
    player2.score = 5;

    printf("-----------------------------------------------\n");
    printf("Player 1 Name: %s\n", player1.name);
    printf("Player 1 score:%d\n", player1.score);
    printf("-----------------------------------------------\n");
    printf("Player 2 Name:%s\n", player2.name);
    printf("Player 2 Score:%d\n", player2.score);
    printf("-----------------------------------------------\n\n");

    return 0;
}