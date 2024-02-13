#include <stdio.h>

int main(){
    int numero;
    
    printf("Informe um número de 3 dígitos: ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int resto = numero % 100;
    int dezena = resto / 10;
    int unidade = resto % 10;
    
    
    printf("\n> A ordem inversa de %d é >>> %d%d%d.", numero, unidade, dezena, centena);

    return 0;
}