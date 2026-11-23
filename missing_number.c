#include <stdio.h>

void main()
{
    int a[100], n, i;
    int expected, actual = 0;

    printf("Enter total numbers including missing one: ");
    scanf("%d", &n);

    printf("Enter %d numbers from 1 to %d:\n", n - 1, n);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        actual += a[i];
    }

    expected = n * (n + 1) / 2;

    printf("Missing number = %d", expected - actual);
}
