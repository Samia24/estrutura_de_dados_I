#include <stdio.h>

int main(){
    int segundos;
    
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);
    
    int horas = segundos / 3600;
    int resto = segundos % 3600;
    int minutos = resto / 60;
    int seg = resto % 60;
    
    printf("\n> %d segundos equivalem a %d horas, %d minutos e %d segundos.", segundos, horas, minutos, seg);

    return 0;
}