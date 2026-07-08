#include <stdio.h>

int main()
{

    // IF condition == Do some code IF the condition is true. IF NOT true then don't do it

    int age = 0;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 65)
    {
        printf("U are a senior");
    }
    else if (age >= 18)
    {
        printf("U are an adult");
    }
    else if (age > 13 || age < 18)
    {
        printf("U are a teen");
    }
    else if (age == 0)
    {
        printf("U just born. u are the youngest person ever");
    }
    else if (age < 0)
    {
        printf("U are not born yet");
    }
    else
    {
        printf("U are child");
    }

    return 0;
}