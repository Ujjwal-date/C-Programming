#include <stdio.h>

void main()
{
    int n, temp, sum = 0, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return;
    }

    temp = n;

    do
    {
        digit = temp % 10;

        sum += digit;
        product *= digit;

        temp /= 10;

    } while(temp > 0);

    if(sum == product)
        printf("Spy Number");
    else
        printf("Not a Spy Number");
}
