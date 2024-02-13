#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    int quociente = num1 / num2;
    int resto = num1 % num2;
    
    printf("\n> Quociente: %d / %d = %d \n", num1, num2, quociente);
    printf("> Resto da divisão: %d / %d >> %d.\n", num1, num2, resto);
    
    return 0;
}