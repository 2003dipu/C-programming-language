#include <stdio.h>

void sort1Darray(char array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // swapping
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print1Darray(char array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c\t", array[i]);
    }
}

int main()
{
    printf("\n\nProject Name: Sort an array\n\n");

    // int array[] = {599, 200, 231, 500, 583, 6, 4, 81, 400, 8, 20, 5, 40, 91};
    char array[] = {'F', 'E', 'Y', 'A', 'B', 'G', 'C'};
    int length = sizeof(array) / sizeof(array[0]);

    sort1Darray(array, length);
    print1Darray(array, length);

    return 0;
}