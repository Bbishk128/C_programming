#include <stdio.h>

int main(){

    int number = 3;
    float price = 19.99;
    double pi = 3.1456789;
    char currency = '$';
    char name[] = "Bbihsk";

    float num1 = 19.99;
    float num2 = 12.98227;
    float num3 = -100.92;

    printf("%d\n", number);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    printf("%+07.2f\n", num1);
    printf("%+4.4f\n", num2);
    printf("%+7.2f\n", num3);

    return 0;
}