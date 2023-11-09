#include <stdio.h>

int main()
{
    if (remove("PRACTICE.txt") == 0)
    {
        printf("File: PRACTICE.txt was deleted successfully\n");
    }
    else
    {
        printf("File: PRACTICE.txt was not deleted\n");
    }
    
    return 0;
}