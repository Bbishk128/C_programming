#include <stdio.h>
#include <string.h>

int main(){

    // shopping cart programm

    char food[50];
    int quantity;
    double price, total;

    
    printf("What would you like to buy? : ");
    fgets(food, sizeof(food), stdin);
    food[strlen(food) - 1] = '\0'; // энэ нь food-д хэрэглэгчийн оруулсан утгын уртыг аваад автоматаар нэмэгдэх \n ийш хасаж оронд нь \0 буюу null ийг тавина.

    printf("And what is the price for each?: ");
    scanf("%lf", &price);

    printf("How many do you want? : ");
    scanf("%d", &quantity);

    printf("\nYou bought %d %s", quantity, food);

    total = price * quantity;
    printf("\nYour total will be $ %.2lf",total);

    return 0;
}