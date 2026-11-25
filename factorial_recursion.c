#include <stdio.h>

long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void main()
{
    int n;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    if(n < 0 || n > 20)
        printf("Invalid input");
    else
        printf("Factorial = %ld", factorial(n));
}
