#include <stdio.h>

void main()
{
    int n, square, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return;
    }

    square = n * n;
    temp = n;

    do
    {
        divisor *= 10;
        temp /= 10;
    } while(temp > 0);

    if(square % divisor == n)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
}
