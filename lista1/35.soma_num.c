#include <stdio.h>

int main(){
    int numero;
    
    printf("Informe um número (4 dígitos): ");
    scanf("%d", &numero);
    
    int milhar = numero / 1000;
    int resto = numero % 1000;
    int centena = resto / 100;
    int res = resto % 100;
    int dezena = res / 10;
    int unidade = res % 10;

    int soma = milhar + centena + dezena + unidade;

    printf("\n> A soma dos elementos -> %d + %d + %d + %d é %d.", milhar, centena, dezena, unidade, soma);

    return 0;
}