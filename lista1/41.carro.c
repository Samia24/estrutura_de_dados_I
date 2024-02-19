#include <stdio.h>

int main(){
    float valorCarro;
    
    printf("Informe o valor do carro: ");
    scanf("%f", &valorCarro);
    
    float percentualDistribuidor = 0.28 * valorCarro;
    float impostos = 0.45 * valorCarro;

    float valorTotal = valorCarro + percentualDistribuidor + impostos;
    
    printf("\n> O valor total do carro novo é de R$ %.2f.", valorTotal);

    return 0;
}