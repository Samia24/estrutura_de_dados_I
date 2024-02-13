#include <stdio.h>

int main(){
    float temperaturaF;
    
    printf("Informe a temperatura em ºF: ");
    scanf("%f", &temperaturaF);
    
    float temperaturaC = (5 * temperaturaF - 160) / 9;

    printf("\n> A temperatura de %.1fºF equivale a %.0fºC.", temperaturaF, temperaturaC);

    return 0;
}