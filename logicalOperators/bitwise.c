#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit level programming (knowing binary is important for this topic)

    // & = AND, | = OR, ^ = XOR, << left shift, >> right shift

    int x = 6;  //   6 = 00000110
    int y = 12; //  12 = 00001100
    int z = 0;  //   0 = 00000000

    z = x & y; // AND bitwise operator &
    printf("AND = %d\n", z);

    z = x | y; // OR bitwise operator |
    printf("OR = %d\n", z);

    z = x ^ y; // Exclusive OR bitwise operator |
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("Shift Left = %d\n", z);

    z = x >> 1;
    printf("Right Right = %d\n", z);

    return 0;
}