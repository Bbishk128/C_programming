#include <stdio.h>

int main(){

    double kg, lbs;
    int answer;

    printf("=====Weight converting programm=====\n");
    printf("1. kg to lbs\n2. lbs to kg\n");
    printf("What is your choice?: ");
    scanf("%d", &answer);

    if(answer==1){
        printf("Enter the weight in kgs: ");
        scanf("%lf", &kg);
        lbs = kg*2.205;
        printf("%.2lf in celsius is %.2lf in Fahrenheit", kg, lbs);
    } else if(answer==2){
        printf("Enter the weight in lbs: ");
        scanf("%lf", &lbs);
        kg = lbs*0.45359;
        printf("%.2lf in fahrenheit is %.2lf in Celsius", lbs, kg);
    } else{
        printf("Invalid choice. Choose one of C or F");
    }
    return 0;
}
    