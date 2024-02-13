#include <stdio.h>

int main(){
    int A;
    int B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("\n> A ordem inversa de %d, %d é >>> %d, %d.", A, B, B, A);

    return 0;
}