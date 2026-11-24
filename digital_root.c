#include <stdio.h>

void main()
{
    int n, sum, digit;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return;
    }

    while(n >= 10)
    {
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }

        n = sum;
    }

    printf("Digital Root = %d", n);
}
