#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
struct customer
{
    int acno;
    char name[20];
    char type;
    float bal;
} c1;

void open_account();
void deposit();
void withdraw();
void show_balance();
void show_all();
void modify_account();
void close_account();

int main()
{
    int choice;

    do
    {

        printf("\n\n<----------------------------> Welcome to Monipuri Bank <---------------------------->\n\n");
        printf("Our Bank is created to help Monipuris transact money smartly all around the world\n");
        printf("---------------------------------------------------------------------------------\n");
        printf("\n 1. Open New Account");
        printf("\n 2. Deposit");
        printf("\n 3. Withdraw");
        printf("\n 4. Show Balance");
        printf("\n 5. Show All");
        printf("\n 6. Modify Account");
        printf("\n 7. Close Account.");
        printf("\n 8. Exit\n");
        printf("---------------------------------------------------------------------------------\n");
        printf("Enter your choice :");
        
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            open_account();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            show_balance();
            break;
        case 5:
            show_all();
            break;
        case 6:
            modify_account();
            break;
        case 7:
            close_account();
            break;
        case 8:
            break;
        default:
            printf("Incorrect Input");
        }

    } while (choice != 8);
}
void open_account()
{
    
}
void deposit()
{
}
void withdraw()
{
}
void show_balance()
{
}
void show_all()
{
}
void modify_account()
{
}
void close_account()
{
}
