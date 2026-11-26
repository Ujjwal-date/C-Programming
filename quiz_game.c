#include <stdio.h>

void main()
{
    int answer, score = 0;

    printf("\n===== C PROGRAMMING QUIZ =====\n");

    printf("\n1. Who developed C language?");
    printf("\n1. James Gosling");
    printf("\n2. Dennis Ritchie");
    printf("\n3. Bjarne Stroustrup");
    printf("\nEnter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. Which symbol ends a C statement?");
    printf("\n1. :");
    printf("\n2. ;");
    printf("\n3. ,");
    printf("\nEnter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n3. Which header contains printf()?");
    printf("\n1. stdio.h");
    printf("\n2. string.h");
    printf("\n3. math.h");
    printf("\nEnter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n4. Which loop executes at least once?");
    printf("\n1. for");
    printf("\n2. while");
    printf("\n3. do-while");
    printf("\nEnter answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n5. Which operator gives remainder?");
    printf("\n1. /");
    printf("\n2. %%");
    printf("\n3. *");
    printf("\nEnter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n\n===== QUIZ RESULT =====");
    printf("\nCorrect Answers = %d/5", score);
    printf("\nPercentage = %d%%", score * 20);
}
