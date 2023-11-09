#include <stdio.h>

// 2D array = an array, where each element is an entire array
// useful if you need a matrix, grid, or table of data

int main()
{
    int homeNumber[5][3] = {
        {456, 457, 458}, // first row
        {123, 124, 125}  // second row
    };

    int idNumber[5][4]; // [row][column]
    int rows = sizeof(idNumber) / sizeof(idNumber[0]);
    int columns = sizeof(idNumber[0]) / sizeof(idNumber[0][0]);

    printf("\nNumber of rows = %d \n", rows);
    printf("Number of columns = %d \n", columns);
    printf("Number of elements = %d \n\n", rows*columns);

    // first row {1, 2, 3, 4}
    idNumber[0][0] = 1;
    idNumber[0][1] = 2;
    idNumber[0][2] = 3;
    idNumber[0][3] = 4;

    // second row {5, 6, 7, 8}
    idNumber[1][0] = 5;
    idNumber[1][1] = 6;
    idNumber[1][2] = 7;
    idNumber[1][3] = 8;

    // third row {9, 10, 11, 12}
    idNumber[2][0] = 9;
    idNumber[2][1] = 10;
    idNumber[2][2] = 11;
    idNumber[2][3] = 12;

    // fourth row {13, 14, 15, 16}
    idNumber[3][0] = 13;
    idNumber[3][1] = 14;
    idNumber[3][2] = 15;
    idNumber[3][3] = 16;

    // fifth row {16, 17, 18, 19}
    idNumber[4][0] = 17;
    idNumber[4][1] = 18;
    idNumber[4][2] = 19;
    idNumber[4][3] = 20;

    for (int i = 0; i < rows; i++) // outer for loop is responsible for rows
    {
        for (int j = 0; j < columns; j++) // outer for loop is responsible for columns
        {
            printf("%d\t", idNumber[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}