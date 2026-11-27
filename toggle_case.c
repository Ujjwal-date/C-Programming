#include <stdio.h>

void main()
{
    char str[200];
    int i;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;

        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    printf("Toggled string: %s", str);
}
