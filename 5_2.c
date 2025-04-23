#include <stdio.h>

int main(){
    int count = 0, sum = 0;
    for(int i = 101; i < 200; i++){
        if(i % 7 == 0){
            count += 1;
            sum += i;
        }
    }
    printf("count = %d\nsum = %d", count, sum);

    return 0;
}