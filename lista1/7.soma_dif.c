#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    printf("Informe o terceiro número: ");
    scanf("%d", &num3);

    int soma = num1 + num2;
    int diferenca = num2 - num3;

    printf("\n> Soma: %d + %d = %d \n", num1, num2, soma);
    printf("> Diferença: %d - %d = %d \n", num2, num3, diferenca);
    
    return 0;
}