#include <stdio.h>

int main(){

    // Арифметик үйлдлүүд
    int x = 10;
    int y = 3;
    float hariu = 0;
    // Энгийн нэмэх хасах
    hariu = x + y;
    hariu = x - y;
    hariu = x * y;
    hariu = x/y; //хуваах үед 2ул float байхгүй бол 1-с бага хариу дээр 0 гэж хариуш нь гаргаж алдана


    // Үлдэгдэл олох. 2ул int байна
    hariu = x % y; // 1 гарна
    hariu = x % 2; // 2т хуваагаад үлдэгдлийг нь өгнө
    
    // 1-р нэмэх, хасах
    hariu++;
    hariu--;

    // Товчлолууд
    hariu += 2; // 2-г нэмнэ
    hariu -= 2; // 2-г хасна
    hariu *= 2; // 2-р үржинэ
    hariu /= 2; // 2-т хуваана

    printf("%d", hariu);
    return 0;
}