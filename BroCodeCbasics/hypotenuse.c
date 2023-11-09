#include <math.h>
#include <stdio.h>

int main()
{
    printf("\nRight angle Triangle\n\n");
    printf("    |\\ \n");
    printf("    | \\ \n");
    printf("    |  \\ \n");
    printf("    |   \\  \n");
    printf("  E |    \\ G\n");
    printf("    |     \\ \n");
    printf("    |      \\ \n");
    printf("    |_______\\ \n");
    printf("        F \n");

    double E, F, G;
    printf("Enter side E: ");
    scanf("%lf", &E);
    printf("Enter side F: ");
    scanf("%lf", &F);

    G = sqrt(pow(E, 2) + pow(F, 2));
    printf("\nHypotenuse G = %.2lf \n", G);
    double area = 0.5 * F * E;
    printf("Area = %.2lf ", area);


    printf("\n\nSquare with the same Area\n\n");
    printf("             C \n");
    printf("     __________________ \n");
    printf("    |                  | \n");
    printf("    |                  |  \n");
    printf("    |                  |  \n");
    printf(" B  |                  | D\n");
    printf("    |                  |  \n");
    printf("    |                  | \n");
    printf("    |__________________| \n");
    printf("              A \n");

    double side = sqrt(area);
    printf("Each side is equal.\n A = B = C = D = %.2lf \n", side);



    return 0;
}