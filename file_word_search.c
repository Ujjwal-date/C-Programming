#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char word[50], current[100];
    int count = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return;
    }

    printf("Enter word to search: ");
    scanf("%49s", word);

    while(fscanf(fp, "%99s", current) == 1)
    {
        if(strcmp(word, current) == 0)
            count++;
    }

    fclose(fp);

    if(count > 0)
        printf("Word found %d times", count);
    else
        printf("Word not found");
}
