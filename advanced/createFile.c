#include <stdio.h>

// write, append, and delete a files using C

int main()
{
    printf("\n\nProject Name: C writing files. Overwrites what is already written\n");

    //FILE *pF = fopen("C:\\Users\\t\\OneDrive\\Desktop\\cWfD.txt", "w");
    FILE *pF = fopen("G:\\My Drive\\practice what you learn\\cWroteThisFile.txt", "w");

    fprintf(pF, "Dipu Singha along with Bro Code YouTube channel using C writes a file on his Google Drive.\nLocation: 'G:\\My Drive\\practice what you learn'\n");

    fclose(pF);

    printf("\n\n");

    return 0;
}