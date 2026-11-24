#include <stdio.h>

void main()
{
    int a[10][10], r, c;
    int i, j, k, min, max, found = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
    {
        min = a[i][0];

        for(j = 1; j < c; j++)
            if(a[i][j] < min)
                min = a[i][j];

        for(j = 0; j < c; j++)
        {
            if(a[i][j] == min)
            {
                max = 1;

                for(k = 0; k < r; k++)
                {
                    if(a[k][j] > min)
                    {
                        max = 0;
                        break;
                    }
                }

                if(max)
                {
                    printf("Saddle point = %d\n", min);
                    found = 1;
                }
            }
        }
    }

    if(!found)
        printf("No saddle point found");
}
