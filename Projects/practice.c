#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\n Is the temperature in F or C ?: ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9) / 5 + 32;
        printf("The temp in Fahrenheit is: %.2f\n", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temp in Celsius is: %.2f\n", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measurement. Enter F for Fahrenheit, C for Celsius", unit);
    }

    return 0;
}