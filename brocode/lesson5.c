#include <stdio.h>

int main()
{

    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); // энэ нь нэр авсны дараа автоматаар \n нэмэгдэхээс сэргийлж байгаа.
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // scanf зай илрүүлэнгүүтээ зогсдог.
                                      // 2 нэр хадгалахгүй тул fgets хэрэглэнэ.
                                      // энэ функцын бүтэц нь эхлээд хадгалах string ээ оруулна,
                                      // түүнийхээ хэмжээг оруулна, stdin буюу standard input гэж бичнэ.
                                      //  нэр авсныц дарааа автоматаар \n нэмэгдэнэ

    printf("\nYour age: %d\n", age);
    printf("Your gpa: %f\n", gpa);
    printf("Your grade: %c\n", grade);
    printf("Your name: %s", name);

    return 0;
}