#include <stdio.h>
#include <string.h>

void sort1Darray(char *array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (strcmp(array[j], array[j + 1]) > 0)
            {
                // swapping
                char *temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print1Darray(char *array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%s  ", array[i]);
    }
}

int main()
{
    printf("\n\nProject Name: Sort an array\n\n");

    char *array[] = {"Dipu", "Shimul", "Shrabanta", "Rituraj", "Dipak", "Dipto", "Chayon", "Sajal", "Labonee", "Dipika"};
    int length = sizeof(array) / sizeof(array[0]);

    sort1Darray(array, length);
    print1Darray(array, length);

    return 0;
}
// AI reading Assistant:> this is an example of speech synthesis in English
