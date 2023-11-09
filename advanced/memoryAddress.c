#include <stdio.h>

int main()
{
    printf("\n\nLearn C memory address in 7 minutes with Bro Code\n\n");
    // memory = an array of bytes within RAM(street)
    // memory block = a single unit(byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)
    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    char d[5];

    int length_a = sizeof(a);
    int length_b = sizeof(b);
    int length_c = sizeof(c);

    printf("%d bytes\n", length_a);
    printf("%d bytes\n", length_b);
    printf("%d bytes\n\n", length_c);
    printf("%d bytes\n\n", sizeof(d));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}