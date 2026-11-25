#include <stdio.h>

void main()
{
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Enter a positive number");
        return;
    }

    temp = n;

    while(temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if(n % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");
}
