#include <stdio.h>

int main(){
    int valorSaque;

    printf("Informe a quantia que deseja sacar: ");
    scanf("%d", &valorSaque);

    int notas50 = valorSaque / 50;
    int resto = valorSaque % 50;
    int notas10 = resto / 10;
    int resto2 = resto % 10;
    int notas5 = resto2 / 5;
    int notas1 = resto2 % 5;

    printf("\n>> VALOR A SACAR : R$%d,00 <<", valorSaque);
    printf("\n> Notas de 50 : R$%d", notas50);
    printf("\n> Notas de 10 : R$%d", notas10);
    printf("\n> Notas de 5 : R$%d", notas5);
    printf("\n> Notas de 1 : R$%d", notas1);
    printf("\n___________________________________");

    return 0;
}