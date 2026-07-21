#include <stdio.h>
#include <stdbool.h>

// Function prototype == Бүхэл программмыг уншихад main функц нь эхэндээ байвал ойлгомжтой байдаг.
//                       Гэвч тухайн функцийг ажилуулахын тулд компьютер тэр функцийг юу байдгийг мэдэх хэрэгтэй.
//                       Тиймээс уншихад амар хэрнээ компьютер юу байдгийг нь мэддэг функц бичихдээ function prototype ашиглана
//                       Зүгээр л эхэнд нь тухайн функаа зарлаад л болоо. Буцаах утга, функцийн нэр, perimeter ээр нь хангаж өгнө.

void hello(char name[], int age); // <-- function prototype
bool agecheck(int age);           //<-- function prototype

int main(){
    hello("Spongebob", 30);

    if (agecheck(30)){
        printf("You are old enough to work at Krusty Krab");
    } else{
        printf("You are not old enought to work at Krusty Krab");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool agecheck(int age){
    return age >= 16;
}