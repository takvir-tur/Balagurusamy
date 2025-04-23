#include <stdio.h>

#define ACCURACY 0.0001

int main(){
    int n, count;
    double x, term, sum;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    n = term = sum = count = 1;
    while (n < 100){
        term = term * (x / n);
        sum = sum + term;
        count += count;
        if(term < ACCURACY)
            n = 999;
        else    
            n += 1;
    }
    printf("Terms = %d Sum = %g\n", count, sum);

    return 0;
}