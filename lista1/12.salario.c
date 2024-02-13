#include <stdio.h>

int main(){
    float salario;
    
    printf("Informe o salário do trabalhador: R$ ");
    scanf("%f", &salario);

    float percentual = 0.25 * salario;
    float novoSalario = salario + percentual;
    
    printf("\n> Salário sem aumento: R$ %.2f.", salario);
    printf("\n> Salário com aumento de 25%%: R$ %.2f.", novoSalario);

    return 0;
}