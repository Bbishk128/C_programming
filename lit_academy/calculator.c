#include <stdio.h>
#include <math.h>

int main(){
    double a, b, hariu;
    char c=' ';

    while(c!='x'){

    printf("\nA:");
    scanf("%lf", &a);

    printf("B:");
    scanf("%lf", &b);

    printf("Ta a=%.2lf bolon b=%.2lf ymr uildel hiih ve?:" , a, b);
    scanf(" %c", &c);

    if(c=='+'){
        hariu = a + b;
        printf("%.2lf+%.2lf=%.2lf", a, b, hariu);
    }
    else if(c=='-'){
        hariu = a - b;
        printf("%.2lf-%.2lf=%.2lf", a, b, hariu);
    }
    else if(c=='*'){
        hariu = a * b;
        printf("%.2lf*%.2lf=%.2lf", a, b, hariu);
    }
    else if(c=='/'){
        hariu = a / b;
        printf("%.2lf/%.2lf=%.2lf",a,b,hariu);
    }
    else if(c=='p'){
        hariu = pow(a, b);
        printf("%.2lf iin %.2lf zereg ni = %.2lf", a, b, hariu);
    }
    else{
        break;
    }
    }
    
}