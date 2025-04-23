#include <stdio.h>

int main(){
    int count = 0;
    float height, weight;
    printf("Enter height and weight of 10 girls\n");

    for(int i = 0; i < 10; i++){
        scanf("%f%f", &height, &weight);
        if(height > 170 && weight < 50)
            count += 1;
    }
    printf("Number of boys with weight <50 kg\nand height >170cm = %d\n", count);
    return 0;
}