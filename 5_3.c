#include <stdio.h>

int main(){
    int a, b, c, d, m, n;
    double x1, x2;
    printf("ax1+bx2=m\ncx1+dx2=n\n");
    scanf("%d%d%d%d%d%d", &a, &b, &m, &c, &d, &n);
    if((a * d - c * b) == 0){
        printf("No Solution");
    }
    else{
        x1 = (double)(m * d - b * n) / (double)(a * d - c * b);
        x2 = (double)(n * a - m * c) / (double)(a * d - c * b);
    }
    printf("x1= %lf\nx2= %lf", x1, x2);
    
    return 0;
}