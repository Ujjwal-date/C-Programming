#include <stdio.h>

void main()
{
    int a[100], b[100], n, m;
    int i, j, k, found;

    printf("Enter first array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array size: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    printf("Common elements: ");

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(k = 0; k < i; k++)
            if(a[k] == a[i])
                found = 1;

        if(found)
            continue;

        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}
