#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    
    float peso1;
    float peso2;
    float peso3;

    printf("Informe a 1ª nota: ");
    scanf("%f", &nota1);
    
    printf("Informe o peso da 1ª nota: ");
    scanf("%f", &peso1);

    printf("Informe a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Informe o peso da 2ª nota: ");
    scanf("%f", &peso2);
    
    printf("Informe a 3ª nota: ");
    scanf("%f", &nota3);

    printf("Informe o peso da 3ª nota: ");
    scanf("%f", &peso3);
    
    float mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("\n> A média ponderada das notas é %.1f.", mediaPonderada);

    return 0;
}