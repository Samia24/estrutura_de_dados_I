#include <stdio.h>

int main(){
    int anos;
    int meses;
    int dias;
    
    printf("Informe sua idade em anos: ");
    scanf("%d", &anos);
    printf("Informe sua idade em meses: ");
    scanf("%d", &meses);
    printf("Informe sua idade em dias: ");
    scanf("%d", &dias);
    
    int anosEmDias = anos * 365;
    int mesesEmDias = meses * 30;
    int somaDias = anosEmDias + mesesEmDias + dias;
    
    printf("\n> %d anos, %d meses e %d dias equivalem a %d dias.", anos, meses, dias, somaDias);

    return 0;
}