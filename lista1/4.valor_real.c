#include <stdio.h>

int main(){
    float valorDolar;
    float valor;
    
    printf("Informe o valor do Dólar: ");
    scanf("%f", &valorDolar);
    
    printf("Informe o valor a converter para Real: ");
    scanf("%f", &valor);

    float valorReal = valorDolar * valor;
    printf("\n> $%.2f dólares equivalem a R$%.2f reais.", valor, valorReal);
    
    return 0;
}