#include <stdio.h>

void main()
{
    int a[100], n, i, j;
    int candidate, count = 0, frequency = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = a[i];
            count = 1;
        }
        else if(a[i] == candidate)
            count++;
        else
            count--;
    }

    for(i = 0; i < n; i++)
        if(a[i] == candidate)
            frequency++;

    if(frequency > n / 2)
        printf("Majority element = %d", candidate);
    else
        printf("No majority element found");
}
