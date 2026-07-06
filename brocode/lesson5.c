#include <stdio.h>

int main(){

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

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("\nYour age: %d\n", age);
    printf("Your gpa: %f\n", gpa);
    printf("Your grade: %c\n", grade);
    printf("Your name: %s", name);

    return 0;
}