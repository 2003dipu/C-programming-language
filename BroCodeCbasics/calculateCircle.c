#include<stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius, area;
    printf("Enter the radius of circle: ");
    scanf("%lf", &radius);
    double circumference = 2*PI*radius;
    printf("The circumference of the circle of radius %.2lf m is: %.2lf m \n", radius, circumference);
    area = PI*radius*radius;
    printf("Area: %.2lf\n", area);
    

    return 0;
}