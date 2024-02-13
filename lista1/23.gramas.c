#include <stdio.h>

int main(){
    float kg;
    
    printf("Informe os quilogramas: ");
    scanf("%f", &kg);
    
    float g = kg * 1000;

    printf("\n> %.1fkg equivalem a %.0fg.", kg, g);

    return 0;
}