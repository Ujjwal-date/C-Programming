#include <stdio.h>
#include <string.h>

void main()
{
    char str[300], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' &&
           str[i] != '\t' && str[i] != '\0')
        {
            if(j < 99)
                word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }

        i++;
    }

    if(max > 0)
        printf("Longest word = %s\nLength = %d",
               longest, max);
    else
        printf("No word found");
}
