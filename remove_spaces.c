#include <stdio.h>

void main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\t' &&
           str[i] != '\n')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Without spaces: %s", str);
}
