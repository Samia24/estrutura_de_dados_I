#include <stdio.h>

int main(){
    int horas;
    int min;

    printf("Informe a hora: ");
    scanf("%d", &horas);
    
    printf("Informe os minutos: ");
    scanf("%d", &min);

    int minutos = (horas * 60) + min;

    printf("\n> %ih%imin equivale a %i minutos.", horas, min, minutos);

    return 0;
}