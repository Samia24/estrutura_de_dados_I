#include <stdio.h>

int main(){
    float base;
    float altura;

    printf("Informe a base do triângulo (cm): ");
    scanf("%f", &base);
    
    printf("Informe a altura do triângulo (cm): ");
    scanf("%f", &altura);

    float area = (base * altura) / 2;

    printf("\n> A área do triângulo é de %.1fcm.", area);

    return 0;
}