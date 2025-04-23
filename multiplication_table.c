#include <stdio.h>

#define COLMAX 10
#define ROWMAX 12

int main(){
    int row = 1, column, y;
    printf("\t   MULTIPLICATION TABLE\t\n");
    printf("____________________________________________\n");

    do{
        column = 1;
        do{
            y = row * column;
            printf("%4d", y);
            column += 1;
        }
        while(column <= COLMAX);
        printf("\n");
        row += 1;
    }
    while(row <= ROWMAX);
    printf("_____________________________________________");

    return 0;
}