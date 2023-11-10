#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';

// function prototypes = helps with readablility
void resetBoard();
void printBoard();
void makeMove(char player);
int checkFreeSpaces();
char checkWinner();
void printWinner(char);

int main()
{
    char response;
    char winner = ' ';

    do
    {
        printf("\n\n");
        winner = ' ';
        resetBoard();
        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();
            makeMove(PLAYER_X);
            printBoard();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            makeMove(PLAYER_O);
            printBoard();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);
        printf("Would you like to play again?(y/n) -> ");
        scanf(" %c", &response);
        response = tolower(response);

    } while (response != 'n');
    printf("\n\nThanks for playing\n\n");

    return 0;
} // 38 lines of code

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
} // 9 lines of code
void printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c", board[i][j]);
            if (j < 2)
                printf(" |");
        }
        if (i < 2)
            printf("\n---|---|---\n");
    }
    printf("\n\n");
} // 13 lines of code

int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
} // 14 lines of code

void makeMove(char player)
{
    int x, y;
    do
    {   // row
        if (player == PLAYER_X)
            printf("Player X's move\nEnter row number (1,2,3)     -> ");
        else
            printf("Player O's move\nEnter row number (1,2,3)     -> ");

        scanf(" %d", &x);

        while (x < 1 || x > 3)
        {
            printf("Invalid input\n");
            printf("Enter row number (1,2,3)     -> ");
            scanf(" %d", &x);
        }
        x--;
        // column
        if (player == PLAYER_X)
            printf("Player X's move\nEnter column number (1,2,3)  -> ");
        else
            printf("Player O's move\nEnter column number (1,2,3)  -> ");

        scanf(" %d", &y);

        while (y < 1 || y > 3)
        {
            printf("Invalid input\n");
            printf("Enter column number (1,2,3)  -> ");
            scanf(" %d", &y);
        }
        y--;

        if (board[x][y] != ' ')
        {
            printf("Invalid move\n");
        }
        else
        {
            board[x][y] = player;
            break;
        }
    } while (board[x][y] != ' ');
}
// 48 lines of code

char checkWinner()
{ // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[0][i] == board[2][i]))
        {
            return board[i][0];
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
    {
        return board[1][1];
    }
    return ' ';
} // in 18 lines of code

void printWinner(char winner)
{
    if (winner == PLAYER_X || winner == PLAYER_O)
    {
        printf("%c wins\n", winner);
    }
    else
    {
        printf("It's a tie\n");
    }
    
} // 4 lines of code -> total 170 lines of code
