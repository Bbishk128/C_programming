#include <stdio.h>
#include <windows.h>

// Кодыг тодорхой тоогоор давт гэсэн утгатай loop юм.
//   for(initialization; condition; update)

int main(){

    int i;

    // 0-с 9 хүртэл хэвлэх
    printf("0-с 9 хүртэл хэвлэх\n");
    for (i = 0; i < 10; i++){
        printf("%d\n", i);
    }

    // 1-с 10 хүртэл хэвлэх
    printf("1-с 10 хүртэл хэвлэх\n");
    for (i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    // 10-с 0 хүртэл хэвлэх
    printf("10-с 0 хүртэл хэвлэх\n");
    for (i = 10; i >= 0; i--){
        Sleep(1000);           // windows.h header ийн тусламжтайгаар удаанаар тоолж байгаа юм.
        printf("%d\n", i);
    }
    printf("HAPPY NEW YEAR!!!");
    return 0;
}