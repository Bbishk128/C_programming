#include <stdio.h>
#include <string.h>

int main()
{

    char adj[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char noun[50] = "";
    char verb[50] = "";

    printf("Please enter and adjective: ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] ='\0';

    printf("Please enter an adjective1: ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] ='\0';

    printf("Please enter an adjective2: ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] ='\0';

    printf("Please enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] ='\0';

    printf("Please enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] ='\0';

    printf("=====THE OUTCOME=====\n");
    printf("Today my class went to see %s zoo\n", adj);
    printf("It was %s because of %s\n", adj, adj1);
    printf("We all saw %s\n", noun);
    printf("%s was %sing\n", noun, verb);

    return 0;
}