#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float x1;
    float y1;
    float x2;
    float y2;
    
    printf(">> Ponto 1 <<\n");
    printf("Informe o valor de X1: ");
    scanf("%f", &x1);
    printf("Informe o valor de Y1: ");
    scanf("%f", &y1);
    printf("\n>> Ponto 2 <<\n");
    printf("Informe o valor de X2: ");
    scanf("%f", &x2);
    printf("Informe o valor de Y2: ");
    scanf("%f", &y2);
    
    float d = sqrt((abs(x2 - x1)) + (abs(y2 - y1)));
    
    printf("\n> A distância entre os dois pontos é de %.1f.", d);

    return 0;
}