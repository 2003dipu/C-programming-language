#include <stdio.h>

/*
int main()
{
    // constant = fixed value that can not be altered by the program during its execution
    const float PI = 3.14159;

    printf("%f", PI);

    return 0;
}
*/

// arithmetic operators
int main()
{
    // arithmetic operators
    // + (addition)
    //- (subtraction)
    // / (division)
    // * (multiplication)
    // ++ (increment)
    // +--(decrement)
    // *= (multiplication assignment)
    // /= (division assignment)
    // += (addition assignment)
    // -= (subtraction assignment)
    // % modulus
    double a = 10;
    a++;
    printf("a = %.2lf \n", a); // a = 11
    a--;
    printf("a = %.2lf \n", a); // a = 10

    a *= 2;
    printf("a = %.2lf \n", a); // a = 10 * 2 = 20
    a /= 5;
    printf("a = %.2lf \n", a); // a = 20 / 5 = 4

    int x = 5;
    float y = (float)x / 2;
    printf("y = %.2f \n", y);

    int p = 9, q = 2;
    int r = p % q;
    printf("using modulus operator yields the remainder of any division %d %% %d =  %d \n", p, q, r);
    


    return 0;
}