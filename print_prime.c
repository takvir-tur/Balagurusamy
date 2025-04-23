#include <stdio.h>

int prime(int num);

int main(){
    int temp, n, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for(int i = 2; i <= n; i++){
        temp = prime(i);
        if(temp == -99){
            continue;
        }
        else{
            printf("%d\t", i);
            count++;
        }
    }
    printf("\nTotal: %d", count);
    return 0;
}

int prime(int num){
    int j;
    if(num <= 1){
        return(-99);
    }
    for(j = 2; j < num; j++){
        if(num % j == 0){
            return(-99);
        }

    }
    return (num);
}