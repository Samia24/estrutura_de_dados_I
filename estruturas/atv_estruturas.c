#include <stdio.h>
#include <stdlib.h>


typedef struct ponto{
    int x;
    int y;
}Ponto;

void pedirValoresPonto(Ponto *p);

typedef struct circulo{
    Ponto p;
    int raio;
}Circulo;

void pedirValoresCirculo(Circulo *c);
void mostraCirculo(Circulo *c);
void atribuiAleatorio(Circulo *c);
void atribuiAleatorioVetor(Circulo *c, int n);
void mostraCirculoVetor(Circulo *c, int n);

int main(){
    Ponto p1;
    Circulo c1;
    Circulo *c2;
    Circulo *c3;
    Circulo vet[10];

    c2 = (Circulo *) malloc (sizeof(Circulo));
    c3 = &c1;

    p1.x = 0;
    p1.y = 0;
    
    printf("\n> Valores de p1 <");
    pedirValoresPonto(&p1);
    printf("\nX: %d", p1.x);
    printf("\nY: %d\n", p1.y);
    
    c1.p.x = 0;
    c1.p.y = 0;
    c1.raio = 3;
    
    printf("\n> Valores de c1 <");
    pedirValoresCirculo(&c1);
    mostraCirculo(&c1);

    c2->p.x = 0;
    c2->p.y = 0;
    c2->raio = 2;
    
    printf("\n> Valores de c2 <");
    pedirValoresCirculo(c2);
    mostraCirculo(c2);

    printf("\n> Valores de c1 <");
    atribuiAleatorio(&c1);
    mostraCirculo(&c1);
    
    printf("\n> Valores de c2 <");
    atribuiAleatorio(c2);
    mostraCirculo(c2);
    
    printf("\n> Valores de c3 <");
    mostraCirculo(c3);
    printf("\n> Valores de c3 <");
    pedirValoresCirculo(c3);
    printf("\n> Valores de c1 <");
    mostraCirculo(&c1);
    printf("\n> Valores de c3 <");
    mostraCirculo(c3);

    printf("\n> Vetor Aleatório 10 posições <\n");
    atribuiAleatorioVetor(vet, 10);
    mostraCirculoVetor(vet, 10);

}

void pedirValoresPonto(Ponto *p){
    printf("\nInforme o valor de x: ");
    scanf("%d", &p->x);
    printf("Informe o valor de y: ");
    scanf("%d", &p->y);
}

void pedirValoresCirculo(Circulo *c){
    printf("\nInforme o valor de x: ");
    scanf("%d", &c->p.x);
    printf("Informe o valor de y: ");
    scanf("%d", &c->p.y);
    printf("Informe o valor do raio: ");
    scanf("%d", &c->raio);
}

void mostraCirculo(Circulo *c){
    printf("\nX: %d", c->p.x);
    printf("\nY: %d", c->p.y);
    printf("\nRaio do círculo: %d\n", c->raio);   
}

void atribuiAleatorio(Circulo *c) {
    printf("\n> Atribuindo valores aleatórios entre 0 e 99 <");
    c->p.x = rand() % 100;
    c->p.y = rand() % 100;
    c->raio = rand() % 100;
}

void atribuiAleatorioVetor(Circulo *c, int n){
    for(int i = 0; i < n; i++){
        c[i].p.x = rand() % 100;
        c[i].p.y = rand() % 100;
        c[i].raio = rand() % 100;
    }
}

void mostraCirculoVetor(Circulo *c, int n){
    for(int i = 0; i < n; i++){
        printf("\n>> Círculo %d", i+1);
        printf("\nX: %d", c[i].p.x);
        printf("\nY: %d", c[i].p.y);
        printf("\nRaio do círculo: %d\n", c[i].raio);   
    }
}
