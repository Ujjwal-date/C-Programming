#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int start, int end)
{
    int i;

    if(start == end)
    {
        printf("%s\n", str);
        return;
    }

    for(i = start; i <= end; i++)
    {
        swap(&str[start], &str[i]);

        permute(str, start + 1, end);

        swap(&str[start], &str[i]);
    }
}

void main()
{
    char str[9];
    int n;

    printf("Enter a string (maximum 8 characters): ");
    scanf("%8s", str);

    n = strlen(str);

    permute(str, 0, n - 1);
}
