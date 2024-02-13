#include <stdio.h>

int main(){
    float base;
    float altura;

    printf("Informe a base do retângulo (cm): ");
    scanf("%f", &base);
    
    printf("Informe a altura do retângulo (cm): ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("\n> A área do retângulo é de %.1fcm.", area);

    return 0;
}