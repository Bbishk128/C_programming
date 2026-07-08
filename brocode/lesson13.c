#include<stdio.h>

int main(){
    // Switch == if-else хэрэглэхийн оронд хэрэглэх шийдэл
    //           int болон char төрөлд хэрэглэхэд тохиромжтой


    //int хувилбар

    /*
    int dayoftheweek = 0;
    printf("PLease enter day of the week and i will tell what's it called (1-7): ");
    scanf("%d", &dayoftheweek);

    switch(dayoftheweek){
        case 1:
            printf("It's called Monday!");
            break;
        case 2:
            printf("It's called Tuesday!");
            break;
        case 3:
            printf("It's called Wednesday!");
            break;
        case 4:
            printf("It's called Thursday!");
            break;
        case 5:
            printf("It's called Friday!");
            break;
        case 6:
            printf("It's called Saturday!");
            break;
        case 7:
            printf("It's called Sunday!");
            break;
        default:
            printf("PLease enter day of the week and i will tell what's it called (1-7): ");
    }

    */


    //char хувилбар
    // Энд хэрхэн 2 өөр case ижил үр дүнд хүргэхийг харууллаа.
    char dayoftheweek = '\0';
    printf("PLease enter letter of the week and i will tell what day it is (M T W R F S U): ");
    scanf("%c", &dayoftheweek);

    switch(dayoftheweek){
    case 'm':
    case 'M':
        printf("It's 1!");
        break;
    case 't':
    case 'T':
        printf("It's 2!");
        break;
    case 'w':
    case 'W':
        printf("It's 3!");
        break;
    case 'r':
    case 'R':
        printf("It's 4!");
        break;
    case 'f':
    case 'F':
        printf("It's 5!");
        break;
    case 's':
    case 'S':
        printf("It's 6!");
        break;
    case 'u':
    case 'U':
        printf("It'S 7!");
        break;
    default:
        printf("PLease enter letter of the week and i will tell what day it is (M T W R F S U): ");
    }


    return 0;
}