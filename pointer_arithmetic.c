#include <stdio.h>

void main()
{
    int a[5], i;
    int *ptr;

    printf("Enter five elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    ptr = a;

    printf("\nArray using pointers:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Value = %d ", *(ptr + i));
        printf("Address = %p\n", (void *)(ptr + i));
    }
}
