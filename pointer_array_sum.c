#include <stdio.h>

void main()
{
    int a[100], n, i, sum = 0;
    int *ptr;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;

    for(i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Array sum = %d", sum);
}
