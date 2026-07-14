#include <stdio.h>
#include <math.h>

int main(){

    double amount, principal, interest_rate;
    int year, per_year;

    printf("Please enter the principal value (P): ");
    scanf("%lf", &principal);
    printf("Enter the interest rate (r): ");
    scanf("%lf", &interest_rate);
    interest_rate /= 100;
    printf("Enter the number of the year (t): ");
    scanf("%d", &year);
    printf("Please enter the number of the compounded per year (n): ");
    scanf("%d", &per_year);

    amount = principal * pow((1 + interest_rate / per_year), per_year * year);

    printf("After %d years\nYour total will be $%.2lf", year, amount);

    return 0;
}