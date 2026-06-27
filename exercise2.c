#include <stdio.h>

int main(){

    float a = 3.1234;
    float b = 45688.4489;

    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;

    printf("Sum is %.2f\n", sum);
    printf("Difference is %.2f\n", difference);
    printf("Product is %.2f\n", product);
    printf("Quotient is %.2f\n", quotient);
}