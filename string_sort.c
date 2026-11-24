#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%99s", str);

    n = strlen(str);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string = %s", str);
}
