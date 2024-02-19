#include <stdio.h>

int main(){
    int dias;
    
    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);
    
    int semanas = dias / 7;
    int d = dias % 7;
    
    printf("\n> %d dias equivalem a %d semanas e %d dias.", dias, semanas, d);

    return 0;
}