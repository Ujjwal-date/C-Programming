#include <stdio.h>

void main()
{
    char a[3][3];
    int i, j, row, col;
    int player = 0, moves = 0, win = 0;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            a[i][j] = '1' + i * 3 + j;

    while(moves < 9 && !win)
    {
        printf("\n");

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
                printf(" %c ", a[i][j]);

            printf("\n");
        }

        printf("\nPlayer %d, enter row and column (1-3): ",
               player + 1);

        scanf("%d%d", &row, &col);

        if(row < 1 || row > 3 || col < 1 || col > 3)
        {
            printf("Invalid position!\n");
            continue;
        }

        if(a[row - 1][col - 1] == 'X' ||
           a[row - 1][col - 1] == 'O')
        {
            printf("Position already occupied!\n");
            continue;
        }

        a[row - 1][col - 1] = player == 0 ? 'X' : 'O';

        moves++;

        for(i = 0; i < 3; i++)
        {
            if(a[i][0] == a[i][1] &&
               a[i][1] == a[i][2])
                win = 1;

            if(a[0][i] == a[1][i] &&
               a[1][i] == a[2][i])
                win = 1;
        }

        if(a[0][0] == a[1][1] &&
           a[1][1] == a[2][2])
            win = 1;

        if(a[0][2] == a[1][1] &&
           a[1][1] == a[2][0])
            win = 1;

        if(win)
        {
            printf("\nPlayer %d wins!\n", player + 1);
            break;
        }

        player = 1 - player;
    }

    if(!win)
        printf("\nMatch Draw!\n");

    printf("\nFinal Board:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf(" %c ", a[i][j]);

        printf("\n");
    }
}
