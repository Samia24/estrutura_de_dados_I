#include <stdio.h>

int main(){
    float temperaturaC;
    
    printf("Informe a temperatura em ºC: ");
    scanf("%f", &temperaturaC);
    
    float temperaturaF = (9 * temperaturaC + 160) / 5;

    printf("\n> A temperatura de %.0fºC equivale a %.1fºF.", temperaturaC, temperaturaF);

    return 0;
}