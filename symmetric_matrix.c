#include <stdio.h>

void main()
{
    int a[10][10], n, i, j;
    int flag = 1;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
        return;

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");
}
