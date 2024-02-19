#include <stdio.h>
#include <math.h>

int main(){
    int binario;
    
    printf("Informe um número binário (4 dígitos): ");
    scanf("%d", &binario);
    
    int milhar = binario / 1000;
    int resto = binario % 1000;
    int centena = resto / 100;
    int res = resto % 100;
    int dezena = res / 10;
    int unidade = res % 10;

    int hexadecimal = (milhar * (pow(2,3))) + (centena * (pow(2,2))) + (dezena * (pow(2,1))) + (unidade * (pow(2,0)));
    
    printf("\n> O número binário -> %d  equivale a %d em hexadecimal.", binario, hexadecimal);

    return 0;
}