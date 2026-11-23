#include <stdio.h>
#include <ctype.h>

void main()
{
    char str[300];
    int i, words = 0, inside = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isspace((unsigned char)str[i]))
            inside = 0;
        else if(!inside)
        {
            words++;
            inside = 1;
        }
    }

    printf("Total words = %d", words);
}
