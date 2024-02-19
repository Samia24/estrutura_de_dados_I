#include <stdio.h>

int main(){
    int numero;
    
    printf("Informe um número (3 dígitos): ");
    scanf("%d", &numero);
    
    int centena = numero / 100;
    int resto = numero % 100;
    int dezena = resto / 10;
    int unidade = resto % 10;

    
    int inverso = unidade * 100 + dezena * 10 + centena;
    int soma = numero + inverso;
    
    printf("\n> A soma do número %d e seu inverso %d é %d.", numero, inverso, soma);

    return 0;
}