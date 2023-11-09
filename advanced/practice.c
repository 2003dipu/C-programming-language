#include <stdio.h>

int main()
{
    // file location: C:\Users\t\OneDrive\Desktop
    FILE *pF = fopen("G:\\My Drive\\PDF books\\chatgptIDEAS.txt", "r");
    char buffer[300];

    if (pF == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        while (fgets(buffer, 300, pF) != NULL)
        {
            // this is just for showing the output to the programmer for practice.This is really important.
            printf("%s \n", buffer);
        }
    }

    fclose(pF);

    return 0;
}