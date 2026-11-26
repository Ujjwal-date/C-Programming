#include <stdio.h>

void main()
{
    int days, i;
    float units[31], total = 0;
    float average, highest = 0;

    printf("Enter number of days: ");
    scanf("%d", &days);

    if(days < 1 || days > 31)
    {
        printf("Invalid number of days");
        return;
    }

    for(i = 0; i < days; i++)
    {
        printf("Enter units for day %d: ", i + 1);
        scanf("%f", &units[i]);

        if(units[i] < 0)
        {
            printf("Invalid units");
            return;
        }

        total += units[i];

        if(i == 0 || units[i] > highest)
            highest = units[i];
    }

    average = total / days;

    printf("\nTotal Consumption = %.2f units", total);
    printf("\nAverage Consumption = %.2f units", average);
    printf("\nHighest Consumption = %.2f units", highest);
}
