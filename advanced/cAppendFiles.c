#include <stdio.h>

int main()
{
    printf("\n\nProject Name: C appends new text to the existing files\n");

    FILE *pF = fopen("withBroCwritesFiles.txt", "a");

    fprintf(pF, "There are other YouTube Channels teaching computer programming languages which are also great \nhowever I prefer to learning from Bro Code YouTube channel. \n");

    fclose(pF);

    printf("\n\n");

    return 0;
}