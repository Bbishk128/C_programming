#include <stdio.h>
#include <math.h>

int main()
{
    // compound interest calculator

    double principal_value = 0.0;
    double total_amount = 0.0;
    double interest_rate = 0.0;
    int year = 0;
    int per_year = 0;

    printf("Please enter the principle value (P): ");
    scanf("%lf", &principal_value);

    printf("PLease enter the interest rate (r): ");
    scanf("%lf", &interest_rate);
    interest_rate = interest_rate / 100;

    printf("PLease enter how many years (t): ");
    scanf("%d", &year);

    printf("Please enter number of times compounded per year (n): ");
    scanf("%d", &per_year);

    total_amount = principal_value * pow((1 + interest_rate / per_year), per_year * year);

    printf("After %d years, the total will be %.2lf", year, total_amount);

    return 0;
}