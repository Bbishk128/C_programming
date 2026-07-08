#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool isStudent;

    printf("Are you student? (True/False): ");
    scanf("%s", &isStudent);

    if (isStudent)
    {
        printf("You are a student");
    }
    else
    {
        printf("You are NOT a student");
    }

    return 0;
}