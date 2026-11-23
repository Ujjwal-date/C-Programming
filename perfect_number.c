#include <stdio.h>

void main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(n > 0 && sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
}
