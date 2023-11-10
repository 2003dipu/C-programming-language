#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

void displayMenu();
void addTask();
void viewTasks();
void removeTask();

int main()
{
    int choice;

    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            removeTask();
            break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

void displayMenu()
{
    printf("\n===== To-Do List Application =====\n");
    printf("1. Add Task\n");
    printf("2. View Tasks\n");
    printf("3. Remove Task\n");
    printf("4. Exit\n");
}

void addTask()
{
    char task[100];
    printf("Enter the task: ");
    scanf(" %s[^\n]", task);

    FILE *file = fopen("tasks.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(file, "%s\n", task);
    fclose(file);

    printf("Task added successfully!\n");
}

void viewTasks()
{
    char task[100];
    FILE *file = fopen("tasks.txt", "r");

    if (file == NULL)
    {
        printf("No tasks available.\n");
    }
    else
    {
        printf("\n===== Tasks =====\n");
        while (fgets(task, sizeof(task), file) != NULL)
        {
            printf("- %s", task);
        }
        fclose(file);
    }
}

void removeTask()
{
    char task[100];
    char temp[100];
    int found = 0;

    printf("Enter the task to remove: ");
    scanf(" %s[^\n]", task);

    FILE *input = fopen("tasks.txt", "r");
    FILE *output = fopen("temp.txt", "w");

    if (input == NULL || output == NULL)
    {
        printf("Error opening files!\n");
        exit(1);
    }

    while (fgets(temp, sizeof(temp), input) != NULL)
    {
        if (strcmp(temp, task) != 0)
        {
            fprintf(output, "%s", temp);
        }
        else
        {
            found = 1;
        }
    }

    fclose(input);
    fclose(output);

    if (remove("tasks.txt") != 0)
    {
        printf("Error deleting the file!\n");
        exit(1);
    }

    if (rename("temp.txt", "tasks.txt") != 0)
    {
        printf("Error renaming the file!\n");
        exit(1);
    }

    if (found)
    {
        printf("Task removed successfully!\n");
    }
    else
    {
        printf("Task not found!\n");
    }
}
