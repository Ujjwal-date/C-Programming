#include <stdio.h>

void main()
{
    long binary;
    int decimal = 0, base = 1, digit;

    printf("Enter binary number: ");
    scanf("%ld", &binary);

    while(binary > 0)
    {
        digit = binary % 10;

        if(digit != 0 && digit != 1)
        {
            printf("Invalid binary number");
            return;
        }

        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal = %d", decimal);
}
