#include <stdio.h>
#include <math.h>

int main(){
    int A;
    int B;
    int C;
    
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    printf("Informe o valor de C: ");
    scanf("%d", &C);
    
    float R = pow((A + B), 2);
    float S = pow((B + C), 2);
    float D = (R + S) / 2;
    
    printf("\n> O resultado da expressão: (%.0f + %.0f) / 2 = %.0f.", R, S, D);

    return 0;
}