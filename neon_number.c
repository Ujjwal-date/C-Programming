#include <stdio.h>

void main()
{
    int n, square, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return;
    }

    square = n * n;

    while(square > 0)
    {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if(sum == n)
        printf("Neon Number");
    else
        printf("Not a Neon Number");
}
