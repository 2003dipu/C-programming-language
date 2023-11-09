#include <stdio.h>

void sortGPA(double gpa[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (gpa[j] < gpa[j + 1])
            {
                double temp = gpa[j + 1];
                gpa[j + 1] = gpa[j];
                gpa[j] = temp;
            }
        }
    }
}

void printSortedGPA(double gpa[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%.2lf  ", gpa[i]);
    }
}

int main()
{
    double gpa[] = {5.00, 3.95, 4.99, 4.95, 2.05, 3.67, 4.44, 4.01, 2.99, 3.01, 3.65, 4.76, 4.75};
    int length = sizeof(gpa) / sizeof(gpa[0]);
    sortGPA(gpa, length);
    printSortedGPA(gpa, length);

    return 0;
}