#include <stdio.h>

int main(){
    float metros;
    
    printf("Informe os metros: ");
    scanf("%f", &metros);
    
    float cm = metros * 100;

    printf("\n> %.1fm equivalem a %.1fcm.", metros, cm);

    return 0;
}