#include <stdio.h>

int main(){
    float km;
    
    printf("Informe os quilômetros: ");
    scanf("%f", &km);
    
    float m = km * 1000;

    printf("\n> %.1fkm equivalem a %.0fm.", km, m);

    return 0;
}