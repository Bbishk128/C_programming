#include <stdio.h>
#include <string.h>
int main(){

    double price, total;
    int quantity;
    char item[50] = "";

    printf("What would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%lf", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s\n", quantity, item);
    printf("Your total is $%.2lf", total);

    return 0;
}