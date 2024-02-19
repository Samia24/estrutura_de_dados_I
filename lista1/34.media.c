#include <stdio.h>

int main(){
    float numero1;
    float numero2;
    float numero3;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);
    printf("Informe o segundo número: ");
    scanf("%f", &numero2);
    printf("Informe o terceiro número: ");
    scanf("%f", &numero3);
    
    float media = (numero1 + numero2 + numero3) / 3;
    
    printf("\n> A média dos números %.0f + %.0f + %.0f é %.1f.", numero1, numero2, numero3, media);

    return 0;
}