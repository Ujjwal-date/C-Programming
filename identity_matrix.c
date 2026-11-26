#include <stdio.h>

void main()
{
    int a[10][10], n, i, j, flag = 1;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j && a[i][j] != 1)
                flag = 0;

            if(i != j && a[i][j] != 0)
                flag = 0;
        }
    }

    if(flag)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");
}
