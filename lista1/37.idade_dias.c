#include <stdio.h>

int main(){
    int dias;
    
    printf("Informe sua idade em dias: ");
    scanf("%d", &dias);
    
    int anos = dias / 365;
    int resto = dias % 365;
    int meses = resto / 30;
    int d = resto % 30;

    printf("\n> %d dias equivalem a %d anos, %d meses e %d dias.", dias, anos, meses, d);

    return 0;
}