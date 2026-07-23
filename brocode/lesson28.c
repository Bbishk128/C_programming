#include <stdio.h>

// Array == Fixed size collection of elements of the same datatype.
//          Similar to variable but holds more than 1 value.

int main(){

    int numbers[] = {10, 20, 30, 40, 50, 60};
    char name[] = "Bro code";
    char grades[] = {'a', 'B', 'C', 'D', 'F'};

    grades[0] = 'A';

    printf("%d\n", numbers[0]);
    printf("%c\n", name[0]);
    printf("%s\n", name);
    printf("%c\n", grades[0]);

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}