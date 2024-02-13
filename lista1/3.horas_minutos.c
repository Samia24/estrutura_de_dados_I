#include <stdio.h>

int main(){
    int minutos;

    printf("Informe os minutos: ");
    scanf("%i", &minutos);

    int horas = minutos / 60;
    int min = minutos % 60;

    printf("\n> %imin corresponde a %ih e %imin.", minutos, horas, min);

    return 0;
}