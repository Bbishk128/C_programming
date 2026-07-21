#include <stdio.h>
#include <string.h>

//function == Дуудагдаж дахин ашиглаж болдог хэсэг код.

// Birthdaysong функц
void Birthdaysong(char name[], int age){  //char name[], int age гэж байгаа нь perimeter нь шүү
    printf("Happy birthday to you\n");
    printf("Happy birthday to YOU\n");
    printf("Happy birthday to my dear %s\n", name);
    printf("You turned %d\n\n", age);
}

int main(){
    char name[50] = "";
    int age = 0;

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Please enter your age: ");
    scanf("%d", &age);

    Birthdaysong(name, age);//name, age гэж байгаа нь argument шүү
    Birthdaysong(name, age);
    Birthdaysong(name, age);
}