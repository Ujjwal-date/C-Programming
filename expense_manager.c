#include <stdio.h>

struct expense
{
    char category[40];
    float amount;
};

void main()
{
    struct expense e[100];
    int n, i;
    float total = 0, highest = 0;
    int highIndex = 0;

    printf("Enter number of expenses: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
        return;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter category: ");
        scanf("%39s", e[i].category);

        printf("Enter amount: ");
        scanf("%f", &e[i].amount);

        if(e[i].amount < 0)
        {
            printf("Invalid amount");
            return;
        }

        total += e[i].amount;

        if(i == 0 || e[i].amount > highest)
        {
            highest = e[i].amount;
            highIndex = i;
        }
    }

    printf("\n----- EXPENSE REPORT -----\n");

    for(i = 0; i < n; i++)
    {
        printf("%s : Rs. %.2f\n",
               e[i].category, e[i].amount);
    }

    printf("\nTotal Expense = Rs. %.2f", total);
    printf("\nHighest Expense = %s (Rs. %.2f)",
           e[highIndex].category, highest);
}
