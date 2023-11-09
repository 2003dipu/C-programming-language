#include<stdio.h>
#include<string.h>

int main()
{
    // accept user input
    char name[25]; // bytes
    int age;
        
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?: "); // printf is used to display something as output
    scanf("%d", &age); // scanf is used to read input

    printf("\nHello %s. You are a great human being. \n",name);
    printf("You are %d years old. \n",age);

    return 0;
}