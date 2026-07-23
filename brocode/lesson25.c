#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// NUMBER GUESSING GAME

int main()
{
    srand(time(NULL));
    int randnum, max = 100, min = 0, guess;

    randnum = (rand() % (max - min + 1)) + min;

    printf("Please enter your guess: ");
    scanf("%d", &guess);
    while (randnum != guess)
    {
        if (randnum > guess)
        {
            printf("Too low guess again\n");
        }
        else if (randnum < guess)
        {
            printf("Too high guess again\n");
        }
        printf("\nPlease enter your guess: ");
        scanf("%d", &guess);
    }
    printf("You got it! Congratulations!");
    return 0;
}