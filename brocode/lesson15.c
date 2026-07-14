#include <stdio.h>

int main(){

    double num1, num2, result;
    char operator;

    printf("Please enter the fist number: ");
    scanf("%lf", &num1);

    printf("Please enter an operator: ");
    scanf(" %c", &operator);

    printf("Please enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf", result);
            break;
        case '/':
            if(num2==0){
                printf("We cannot divide anything by 0");
                break;
            }else{
                result = num1 / num2;
                printf("Result: %.2lf", result);
                break;
            }
            default:
                printf("Wrong operator.");
                break;
    }

    return 0;
}