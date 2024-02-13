#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;
    int diferenca = abs(num1 - num2);
    int divisao = soma / diferenca;

    printf("\n> Soma: %d + %d = %d \n", num1, num2, soma);
    printf("> Diferença: %d - %d = %d \n", num1, num2, diferenca);
    printf("> Divisão da soma pela subtração dos números: %d / %d = %d \n", soma, diferenca, divisao);

    return 0;
}