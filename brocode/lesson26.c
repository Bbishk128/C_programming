#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserchoice();
int getComputerchoice();
void checkWinner(int userchoice, int computerchoice);

int main(){

    printf("=====ROCK PAPER SCISSORS GAME=====\n");
    srand(time(NULL));
    int userchoice = getUserchoice();
    int computerchoice = getComputerchoice();

    switch(userchoice){
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;
    }

    switch(computerchoice){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSORS\n");
    }
    checkWinner(userchoice, computerchoice);
    return 0;
}

int getUserchoice(){
    int choice=0;

    do{
        printf("Choose your move!\n 1. ROCK\n 2. PAPER\n 3. SCISSORS\n");
        printf("Your choice?: ");
        scanf("%d", &choice);
    } while (choice > 3 || choice < 1);
    return choice;
}

int getComputerchoice(){
    return ((rand() % 3) + 1);
}

void checkWinner(int userchoice, int computerchoice){
    if (userchoice == computerchoice){
        printf("It's a tie. TIE lol");
    }
    else if ((userchoice == 1 && computerchoice ==2)||(userchoice==2 && computerchoice==3)||(userchoice==3 && computerchoice==1)){
        printf("Computer won");
    }else{
        printf("You WON! CONGRATULATIONS!!!");
    }
}