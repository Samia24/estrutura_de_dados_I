#include <stdio.h>

int main(){
    int meses;
    
    printf("Informe a quantidade de meses: ");
    scanf("%d", &meses);
    
    int anos = meses / 12;
    int mes = meses % 12;
    
    printf("\n> %d meses equivalem a %d anos e %d meses.", meses, anos, mes);

    return 0;
}