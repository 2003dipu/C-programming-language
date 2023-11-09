#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    char a = 'C'; // single character       %c
    char b[] = "Rosmi Sinha"; // array of characters %s = string

    int i = 213434;
    float c = 3.141592653589793;     // 4 bytes (32 bits of precision) 6-7 digits    %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits  %lf

    bool e = true;  // 1 byte true or false %d

    printf("%0.15f\n", c); // 3.141592741012573 (with float precision is lost)       = less memory . No pay no access to precision?
    printf("%0.15lf\n", d); // 3.141592653589793 (with double precision is preserved) = more memory. Pay more to have more?

    printf("%d\n", e); // 1= true, 0 = false

    char f = 126; // 1 byte (-128 to +127)  %d or %c
    printf("%c\n", f);

    unsigned char g = 255; // 1 byte (0 to +255)        %d or %c
    

    printf("%d\n", g);

    short int h = 32667; // short uses 2 bytes of memory
    
    printf("%d\n", h);

    // long long
    long long int vln = 9223372036854775807; // 8 bytes (- 9 quintillion to +9 quintillion)     %lld
    unsigned long long int dipu = 4223372036854775808u;
    printf("This is a very long long integer number %lld\n", vln);
    printf("This is a very long long integer number %llu\n", dipu);


    


    return 0;
}