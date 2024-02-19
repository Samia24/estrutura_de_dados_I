#include <stdio.h>

int main(){
    int minutos;
    
    printf("Informe a quantidade de minutos: ");
    scanf("%d", &minutos);
    
    int dias = minutos / 1440;
    int resto = minutos % 1440;
    int horas = resto / 60;
    int min = resto % 60;
    
    printf("\n> %d minutos equivalem a %d dias, %d horas e %d minutos.", minutos, dias, horas, min);

    return 0;
}