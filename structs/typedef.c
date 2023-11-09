// typedef = reserved keyword that gives an existing datatype a "nickname"
#include <stdio.h>
#include <string.h>

// typedef char user[25];
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    printf("\n");
    // user user1 = "Rosmi Sinha";
    User user1 = {"Rosmi", "password123", 123456789};
    User user2 = {"Anushka", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    printf("\n");

    return 0;
}