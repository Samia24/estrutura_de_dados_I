#include <stdio.h>

int main(){
    float velocidadeKmH;

    printf("Informe a velocidade (km/h): ");
    scanf("%f", &velocidadeKmH);

    float velocidadeMS = velocidadeKmH / 3.6;

    printf("\n> A velocidade de %.1f km/h equivale a %.1f m/s.", velocidadeKmH, velocidadeMS);
    
    return 0;
}