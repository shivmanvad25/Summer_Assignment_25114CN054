//Write a program to Create number guessing game.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess=0, try=0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("GUESS A NUMBER BETWEEN 1 TO 100\n");

    while(guess != num)
    {
        printf("Enter your guess : ");
        scanf("%d", &guess);

        try++;

        if(guess > num)
        {
            printf(" GUESS IS HIGH!\n");
        }
        else if(guess < num)
        {
            printf("GUESS IS LOW!\n");
        }
        else
        {
            printf("CONGRATULATIONS, YOU HAVE GUESSED CORRECTLY.\n");
            printf("You  have guessed in %d attempts.\n", try);
        }

    } 

    return 0;
}
