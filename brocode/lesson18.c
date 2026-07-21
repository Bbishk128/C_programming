#include <stdio.h>

// Variable scope == Хувьсагч эсвэл функц хаана харагдахыг хэлнэ.
//                   Хэрэв хувьсагчид өөр өөр scope-д байвал ижил нэртэй байж болно.

// int result=0; // THIS IS GLOBAL SCOPE //WOULDNT RECCOMEND HARD TO DEBUG

int add(int x, int y){
    int result = x + y;
    return result;
}
int subract(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    int x = 3;    //LOCAL SCOPE 
    int y = 4;

    int result = add(x, y);
    int result2 = subract(x, y);

    printf("%d\n", result);
    printf("%d\n", result2);

    return 0;
}