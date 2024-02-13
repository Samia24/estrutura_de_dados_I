#include <stdio.h>
#define pi 3.1419

int main(){
    float raio;
    
    printf("Informe o valor do raio de uma circunferência: ");
    scanf("%f", &raio);
    
    float comprimento = 2 * pi * raio;

    printf("\n> O comprimento da circunferência é de %.2fcm.", comprimento);

    return 0;
}