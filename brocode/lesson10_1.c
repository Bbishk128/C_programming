#include <stdio.h>
#include <string.h>

int main()
{

    char name[30] = "";
    printf("Please enter your name here: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    if (strlen(name) == 0)
    {
        printf("you DID not enter your name OMFG");
    }
    else
    {
        printf("Hi hiiii %s", name);
    }
    return 0;
}