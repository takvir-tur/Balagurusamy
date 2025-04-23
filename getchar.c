#include <stdio.h>

int main(){
    char character;
    // character = '';
    // while(character != '\n'){
        character = getchar();
    // }
    int a = isdigit(character);
    printf("%c\n", character);
    printf("%d", a);

}