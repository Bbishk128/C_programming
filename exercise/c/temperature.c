#include <stdio.h>

int main(){

    double celsius, fahrenheit;
    char answer;

    printf("=====Temperature converting programm=====\n");
    printf("C. Celsius to Fahrenheit\nF. Fahrenheit to celsius\n");
    printf("What is your choice?: ");
    scanf("%c", &answer);

    if(answer=='c' || answer=='C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = 9.0 / 5.0 * celsius + 32.0;
        printf("%.2lf in celsius is %.2lf in Fahrenheit", celsius, fahrenheit);
    } else if(answer=='f'|| answer =='F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = 9.0 / 5.0 * fahrenheit + 32.0;
        printf("%.2lf in fahrenheit is %.2lf in Celsius", fahrenheit, celsius);
    } else{
        printf("Invalid choice. Choose one of C or F");
    }
    return 0;
}
    