#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int secret, guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));

    secret = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100.\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secret)
            printf("Too High! Try again.");

        else if(guess < secret)
            printf("Too Low! Try again.");

        else
        {
            printf("\nCongratulations!");
            printf("\nYou guessed the number in %d attempts.",
                   attempts);
        }

    } while(guess != secret);
}
