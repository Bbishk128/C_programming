#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int randnum, max, min;
    srand(time(NULL));
    printf("Enter your min number: ");
    scanf("%d", &min);
    printf("Enter your max number: ");
    scanf("%d", &max);

    randnum = (rand() % (max - min + 1)) + min;

    printf("Your random number is : %d", randnum);

    return 0;
}