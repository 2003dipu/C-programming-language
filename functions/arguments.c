#include <stdio.h>

void birthDay(char name[], int age)
{
    printf("Happy Birthday dear.... you\n");
    printf("Happy Birthday My Dear %s\n", name);
    printf("You are %d years old\n", age);
}

int main()
{
    printf("\n\n");

    char name[] = "Rosmi Sinha";
    int age = 17;

    birthDay(name, age);

    printf("\n\n");
    return 0;
}