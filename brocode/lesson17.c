#include <stdio.h>
#include <stdbool.h>

// Return == Функцийг хаана дуудсан тэнд нь буцаах утгыг хэлнэ. Олон буцаах буюу return value бий.
double square(double num)
{
    double result = num * num;
    return result;
}

int getMax(int x, int y){
    if (x>y){
        return x;
    } else {
        return y;
    }
}

double cube(double num)
{

    return square(num) * num; // дээр байгаа шиг result гээд хувьсагч зарлаж болно эсвэл шууд юу буцаахыг нь бичиж болно.
}

bool agecheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int age = 19;
    if(agecheck(age)){
        printf("Ur an adult\n");
    } else{
        printf("UR not an adult bro\n");
    }

    double x = square(2);
    double y = square(3);
    double z = square(4);
    double t = cube(3);
    int max = getMax(22, 3);

    printf("%d\n", max);
    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);
    printf("%.2lf\n", t);

    return 0;
}