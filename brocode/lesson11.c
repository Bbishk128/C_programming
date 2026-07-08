#include <stdio.h>

int main()
{

    double weight = 0.0;
    int answer = 0;

    printf("=====Weight converter lol welcomeee=====\n");
    printf("1. lbs to kgs\n");
    printf("2. kgs to lbs\n");
    printf("Choose from options and hit enter(1 or 2): ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("Please enter your weight in lbs: ");
        scanf("%lf", &weight);
        weight /= 2.20462;
        printf("Your weight is %.2lf kg", weight);
    }
    else if (answer == 2)
    {
        printf("Please enter your weight in kg: ");
        scanf("%lf", &weight);
        weight *= 2.20462;
        printf("Your weight is %.2lf lb", weight);
    }
    else
    {
        printf("Please enter correct number");
    }
    return 0;
}