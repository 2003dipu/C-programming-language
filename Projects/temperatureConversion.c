#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("\nTemperature Conversion Calculator\n");
    float fahrenheit, celsius, kelvin;
    printf("Convert your temperature : Celsius, Fahrenheit, Kelvin\n");
    printf("1. Celsius -> Fahrenheit\n2. Fahrenheit -> Celsius\n3. Celsius -> Kelvin\n4. Kelvin -> Celsius\n\n->: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9) / 5 + 32;
        printf("\n%.2f°C = %.2f°F ", celsius, fahrenheit);
        break;
    case 2:
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("\n%.2f°F = %.2f°C ", fahrenheit, celsius);
        break;
    case 3:
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("\n%.2f°C = %.2f°K ", celsius, kelvin);
        break;
    case 4:
        printf("\nEnter the temperature in Kelvin: ");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        printf("\n%.2f°K = %.2f°C ",kelvin, celsius);
        break;

    default:
        printf("Invalid temperature. Enter a valid number.\n");
        break;
    }
    return 0;
}