#include <stdio.h>

int main()
{
    printf("\nBasic Arithmetic Calculator\n");
    printf("You can add, subtract, divide and multiply\n");
    double num1, num2, result;
    char uChooseOperator;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator:( + - * / ):  ");
    scanf(" %c", &uChooseOperator);

    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("\n");

    switch (uChooseOperator)
    {
    case '+':
        result = num1 + num2;
        printf("Addition\n%lf + %lf = %lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction\n%lf - %lf = %lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication\n%lf * %lf = %lf", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("Division:\n%lf / %lf = %lf", num1, num2, result);
        break;

    default:
        printf("Invalid input. Enter valid number and operator\n");
        break;
    }

    return 0;
}