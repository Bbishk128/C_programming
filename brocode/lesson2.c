#include <stdio.h>
#include <stdbool.h>

// today's lesson is for learning variables
/*
#include <stdio.h> ni input output iig gargaj bga
#include <stdbool.h> ni bool utgiig oruulj bga
*/

int main()
{
    // int нь бүхэл тоон утга юм.
    int age = 19;
    int year = 2026;
    // %d гэдгээр int утга орно шүү гэж байгаа хэрэг. орлуулах утгаа ард нь "" ард хаалтны дотор бичсэн байна.
    printf("As of today i am %d years old\n", age);
    printf("it's %d july\n", year);

    // float нь бутархай тоон утга юм.
    float gpa = 2.5;
    float price = 19.99;
    float temperature = 24.5;
    // %f гэдгээр float утга орно шүү гэж байгаа хэрэг.
    printf("Sadly my gpa is %f.\n", gpa);
    printf("That will be %f\n", price);
    printf("Temperature here is %f gradus\n", temperature);

    // double нь 2 дахин урт float юм.
    double pi = 3.146236238894;
    double e = 2.717328774374;
    // %lf гэдгээр double утга орно шүү гэж байгаа хэрэг.
    printf("The value of pi is %lf\n", pi);
    printf("The value of e is %lf\n", e);

    // char нь ганц тэмдэгтийг илтгэнэ.
    char grade = 'A';
    char symbol = '/';
    // %c гэдгээр char утга орно шүү гэж байгаа хэрэг.
    printf("My fav symbol is %c\n", grade);
    printf("Your fav symbol is %c\n", symbol);

    // char[] нь бүлэг тэмдэгтийн цуглуулга юм. string гэж ойлгож болно.
    char myname[] = "Bshk";
    char food[] = "CHICKEN SKIN";
    char email[] = "BBshk128@gmail.com";
    // %s гэдгээр char[] утга орно шүү гэж байгаа хэрэг.
    printf("My name is %s\n", myname);
    printf("My fav food is %s\n", food);
    printf("My email is %s\n", email);

    //bool нь true буюу 1 false буюу 0 гэсэн утга авна.
    bool isStudent = 1;
// isStudentнь 1 буюу true учраас доорх if нөхцөл биелэж сурагч мөн гэж хэвлэнэ
    if(isStudent){
        printf("You are student\n");
    } else{
        printf("You are not student\n");
    }
    return 0;
}