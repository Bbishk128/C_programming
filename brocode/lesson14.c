#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Nested if statements

    double price = 10.00;
    bool issenior = false;
    bool isstudent = false;

    if (isstudent)
    {
        if (issenior)
        {
            printf("You are student and a senior so you get 30%% off congrats"); // 2ш % ашигласан учир нь % онцгой тэмдэгт ба outcome дээр йсуудал гараад бсн
            price *= 0.7;
        }
        else
        {
            printf("You are student so you get 10%% off");
            price *= 0.9;
        }
    }
    else if (issenior)
    {
        printf("You are a senior you get 20%% off");
        price *= 0.8;
    }
    printf("\nYour price will be $%.2lf", price);

    return 0;
}