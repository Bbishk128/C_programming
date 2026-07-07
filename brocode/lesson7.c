#include <stdio.h>
#include <string.h>

int main(){

    char adj1[50] = "";
    char noun[20] = "";
    char adj2[20] = "";
    char verb[20] = "";
    char adj3[20] = "";

    printf("Please enter an adjective(a description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] ='\0'; //энэ байхгүй бол OUTPUT др нэг мөр илүү яваад байгаа.

    printf("Please enter a noun (animal or human name): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Please enter an adjective (a description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("Please enter a verb (ending with ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Please enter an adjective: ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("\nToday i went to %s zoo.\n", adj1);
    printf("In an exhibit, i saw a %s.\n", noun);
    printf("%s was %s and %s.\n", noun, adj2, verb);
    printf("I was %s.\n", adj3);
    return 0;
}