#include <stdio.h>

int main(){
    float anos;
    float qtdCigarros;
    float preco;
    
    printf("Informe a quantos anos você fuma: ");
    scanf("%f", &anos);
    printf("Informe a quantidade de cigarros fumados por dia: ");
    scanf("%f", &qtdCigarros);
    printf("Informe o valor da carteira de cigarro: ");
    scanf("%f", &preco);
    
    float totalCigarros = anos * (qtdCigarros * 365);
    float gasto = totalCigarros * preco;
    
    printf("\n> O valor total gasto em %.0f cigarros é de R$ %.2f.", totalCigarros, gasto);

    return 0;
}