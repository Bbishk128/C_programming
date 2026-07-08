#include <stdio.h>

int main()
{

    double temperature;
    char option;

    printf("Temperature converting programm\n");
    printf("C. Celsius to fahrenheit\n");
    printf("F. Fahrenheit to celsius\n");
    printf("What is your option? (C or F): ");
    scanf(" %c", &option);

    if (option == 'c' || option == 'C')
    {
        printf("PLease enter your temperature in celsius: ");
        scanf("%lf", &temperature);
        temperature = 9.0 / 5.0 * temperature + 32;
        printf("Your temperature is %.2lf F", temperature);
    }
    else if (option == 'f' || option == 'F')
    {
        printf("Please enter temperature in fahrenheit");
        scanf("%lf", &temperature);
        temperature = 5.0 / 9.0 * (temperature - 32);
        printf("Your temperature is %.2lf C", temperature);
    }
    else
    {
        printf("You entered wrong answer");
    }

    return 0;
}