#include <stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a == 0 || b == 0)
    {
        printf("LCM = 0");
        return;
    }

    result = (a / gcd(a, b)) * b;

    if(result < 0)
        result = -result;

    printf("LCM = %d", result);
}
