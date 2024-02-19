#include <stdio.h>

int main(){
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;
    
    printf(">> Fração 1 <<\n");
    printf("Informe o numerador da 1ª fração: ");
    scanf("%d", &numerador1);
    printf("Informe o denominador da 1ª fração: ");
    scanf("%d", &denominador1);
    printf("\n>> Fração 2 <<\n");
    printf("Informe o numerador da 2ª fração: ");
    scanf("%d", &numerador2);
    printf("Informe o denominador da 2ª fração: ");
    scanf("%d", &denominador2);
    
    int somaNumeradores = numerador1 * denominador2 + numerador2 * denominador1;
    int somaDenominadores = denominador1 * denominador2;
    
    printf("\n> Soma das frações: %d/%d + %d/%d = %d/%d", numerador1, denominador1, numerador2, denominador2, somaNumeradores, somaDenominadores);

    return 0;
}