#include <stdio.h>

int main(){
    int numero;

    printf("Informe um número com 3 dígitos: ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int resto = numero % 100;
    int dezena = resto / 10;
    int unidade = resto % 10;

    int soma = centena + dezena + unidade;

    printf("\n> O soma de %d + %d + %d, é igual a %d.", centena, dezena, unidade, soma);

    return 0;
}