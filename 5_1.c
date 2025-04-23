// Determining if a number is odd or even

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    switch(num % 2){
        case 0:
            printf("Even");
            break;
        case 1:
            printf("Odd");
            break;
        default:
            printf("Enter non negative number greater than zero");
    }

    return 0;
}