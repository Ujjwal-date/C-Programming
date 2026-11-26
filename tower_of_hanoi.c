#include <stdio.h>

void hanoi(int n, char source,
           char auxiliary, char destination)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    hanoi(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    hanoi(n - 1, auxiliary, source, destination);
}

void main()
{
    int n;

    printf("Enter number of disks (1 to 10): ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
        printf("Invalid number of disks");
    else
        hanoi(n, 'A', 'B', 'C');
}
