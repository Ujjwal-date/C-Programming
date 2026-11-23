#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0, lines = 0;
    int inside = 0, last = '\n';

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' ||
           ch == '\t' || ch == '\r')
        {
            inside = 0;
        }
        else if(!inside)
        {
            words++;
            inside = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
        lines++;

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);
}
