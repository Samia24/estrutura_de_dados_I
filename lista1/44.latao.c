#include <stdio.h>

int main(){
    int latao;

    printf("Informe a quantidade em Kg de latão: ");
    scanf("%d", &latao);

    float cobre = 0.7 * latao;
    float zinco = 0.3 * latao;

    printf("\n> Quantidade de cobre: %.1fkg \n> Quantidade de zinco: %.1fkg.", cobre, zinco);
    
    return 0;
}