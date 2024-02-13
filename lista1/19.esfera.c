#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){
    float raio;
    
    printf("Informe o valor do raio de uma esfera: ");
    scanf("%f", &raio);
    
    float volume = 4 * pi * pow(raio, 3);

    printf("\n> O volume da esfera é de %.2f.", volume);

    return 0;
}