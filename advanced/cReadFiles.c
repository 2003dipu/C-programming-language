#include <stdio.h>

int main()
{
    // file location: C:\Users\t\OneDrive\Desktop
    FILE *pF = fopen("G:\\My Drive\\PDF books.pdf", "r");
    char buffer[300];

    if (pF == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        while (fgets(buffer, 300, pF) != NULL)
        {
            printf("%s \n", buffer);
        }
    }

    fclose(pF);

    return 0;
}