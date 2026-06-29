#include <stdio.h>

int main()
{

    printf("***FINDING NEMO***\n");
    int dugaar, operator;

    printf("Ta dugaaraa oruulna uu: ");
    scanf("%d", &dugaar);
    operator = dugaar / 1000000;

    if (operator == 88 || operator == 89 || operator == 80)
    {
        printf("UNITEL\n");
    }
    else if (operator == 91 || operator == 96 || operator == 90)
    {
        printf("SKYTEL\n");
    }
    else if (operator == 99 || operator == 85 || operator == 95)
    {
        printf("MOBICOM\n");
    }
    else if (operator == 98)
    {
        printf("GMOBAIL\n");
    }
    else
    {
        printf("tanii hiisen dugaar zuw dugaar bish baina");
    }

    return 0;
}