#include <stdio.h>

void main()
{
    FILE *fp;
    int frequency[256] = {0};
    int ch, i;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        frequency[(unsigned char)ch]++;
    }

    fclose(fp);

    printf("Character Frequency:\n");

    for(i = 0; i < 256; i++)
    {
        if(frequency[i] > 0)
        {
            if(i >= 32 && i <= 126)
                printf("%c = %d\n", i, frequency[i]);
            else
                printf("ASCII %d = %d\n",
                       i, frequency[i]);
        }
    }
}
