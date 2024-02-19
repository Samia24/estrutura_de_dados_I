#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);
    printf("Informe o valor de d: ");
    scanf("%f", &d);
    printf("Informe o valor de e: ");
    scanf("%f", &e);
    printf("Informe o valor de f: ");
    scanf("%f", &f);
    
    float x = (((c * e) - (b * f)) / ((a * e) - (b * d)));
    float y = (((a * f) - (c * d)) / ((a * e) - (b * d)));
    
    printf("\n> O valor de x é %.0f e de y é %.0f.", x, y);

    return 0;
}