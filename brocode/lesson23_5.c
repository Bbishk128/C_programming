#include <stdio.h>

int main(){

    int column = 0;
    int row = 0;
    char symbol = '\0';

    printf("Enter the number of column: ");
    scanf("%d", &column);

    printf("Enter the number of row: ");
    scanf("%d", &row);

    printf("Enter the symbol to fill it: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

        return 0;
}