#include <stdio.h>
#include <math.h>

int main(){
    float lado;
    
    printf("Informe o lado do quadrado (cm): ");
    scanf("%f", &lado);

    float area = pow(lado, 2);

    printf("\n> A área do quadrado é de %.1fcm.", area);

    return 0;
}