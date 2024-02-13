#include <stdio.h>

int main(){
    float valor;
    
    printf("Informe um valor em reais: R$ ");
    scanf("%f", &valor);

    float desconto = 0.70 * valor;
    float novoValor = valor - desconto;
    
    printf("\n> Valor sem desconto: R$ %.2f.", valor);
    printf("\n> Valor com desconto de 70%%: R$ %.2f.", novoValor);

    return 0;
}