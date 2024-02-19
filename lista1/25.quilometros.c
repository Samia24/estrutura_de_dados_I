#include <stdio.h>

int main(){
    int metros;
    
    printf("Informe os metros: ");
    scanf("%d", &metros);
    
    int km = metros / 1000;
    int m = metros % 1000;
    
    printf("\n> %dm equivalem a %dkm e %dm.", metros, km, m);

    return 0;
}