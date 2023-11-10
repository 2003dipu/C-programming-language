#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void login();
void menu();
void transaction();
void option();

void chkblnc();
void deposit();
void withdrawl();
void search();
void search_acc();
void search_name();
void view();
void add();
void edit();
void del();
void about();

int verify(); // for verifying admin and user

char id[20], password[15];

struct record
{
    char name[25];
    int account;
    char phone[15];
    char address[25];
    char email[35];
    char citiz[20];
    double blnc;
    char UserID[10];
} rec;

int main()
{
    printf("\n\n<------------------------------------------------------------------------------------------>\n");
    printf("<----------------------------> Welcome to your Trusted Bank <--------------------------->\n");
    printf("<-----------------> You may not trust your friends but you can trust us <--------------->\n");
    printf("<------------------------------------------------------------------------------------------>\n\n");

    return 0;
}

void admin()
{
}

// Takes the user-name and password .
void login()
{
}

// verifies the user-name and password .
int verify()
{
}

// displays the main user interface screen of program .
void menu()
{
}

// takes user choice and goes to desired function .
void option()
{
}

// module for viewing account details
void view()
{
}

// module for adding accounts.
void add()
{
}

// module to check whether the entered account is in the database or not

// module for editing details.
void edit()
{
}

// module for deleting account
void del()
{
}

// module for searching account ( 2 types by number and name )
void search()
{
}

void search_acc()
{
}

void search_name()
{
}

// displays screen for the transaction options and takes the user choice .
void transaction()
{
}

// module for checking account balance and displaying it
void chkblnc()
{
}

// module for adding amount to a account
void deposit()
{
}

// module to withdraw amount from account
void withdrawl()
{
}

// module for logging out of the program.

void about()
{

    printf("!!!ABOUT US!!!");
    printf("This project has been created by Dipu Singha.");
    printf("It is a Simple Bank Management System Project for practicing C programming language.");
    printf("Press any key to return back to main menu. ");
    char z = getch();
    if (z == 13)
    {
        menu();
    }
}