#include <stdio.h>

int main() {
    float valor_mercadoria; 
    
    printf("Informe o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);
    
    // Calcula o valor da entrada
    int entrada = valor_mercadoria / 3;
    int resto = (int)valor_mercadoria % 3;
    
    // Arredonda a entrada para o próximo número inteiro
    entrada += resto;
    
    // Calcula o valor das prestações (que devem ser iguais à entrada)
    float prestacao = (valor_mercadoria - entrada) / 2;
    
    // Exibe os resultados
    printf("\n> Valor da entrada: R$ %.2f\n", (float)entrada);
    printf("> Valor das duas prestações: 2 x R$ %.2f\n", prestacao);
    
    return 0;
}
