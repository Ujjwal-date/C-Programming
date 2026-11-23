#include <stdio.h>

long power(int base, int exp)
{
    if(exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

void main()
{
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    if(exp < 0 || exp > 30)
        printf("Enter exponent between 0 and 30");
    else
        printf("Result = %ld", power(base, exp));
}
