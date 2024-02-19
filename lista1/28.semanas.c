#include <stdio.h>

int main(){
    int horas;
    
    printf("Informe a quantidade de horas: ");
    scanf("%d", &horas);
    
    int semanas = horas / 168;
    int resto = horas % 168;
    int dias = resto / 24;
    int h = resto % 24;
    
    printf("\n> %d horas equivalem a %d semanas, %d dias e %d horas.", horas, semanas, dias, h);

    return 0;
}