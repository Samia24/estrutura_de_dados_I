#include <stdio.h>
#include <stdlib.h>

void preencherVetorInscricoes(int n, int *v);
void mostrarVetor(int n, int *v);
void preencherNotas(int n, int *inscr, float *v);
void mostrarNotas(int n, int *v, float *notas);
void calcularMediaPonderada(int n, int peso1, float *notas1, int peso2, float *notas2, float *medias);
void mostrarMedias(int n, int *v, float *medias);
int *premiados(int n, int *inscrMaior, float *medias, int *inscricoes, int *tamanho);
void mostrarInscricoesMaiorMedia(int *inscrMaior, int tamanho);

int main(){
    int n;
    int *inscr;
    float *t1;
    int p1;
    float *t2;
    int p2;
    int tam = 0;
    float *mediasPonderadas;
    int *inscricaoMaiorMedia;

    printf("\n> Informe a quantidade de participantes do concurso: ");
    scanf("%d", &n);

    inscr = (int *)malloc(n * sizeof(int));
    t1 = (float *)malloc(n * sizeof(float));
    t2 = (float *)malloc(n * sizeof(float));
    mediasPonderadas = (float *)malloc(n * sizeof(float));
    inscricaoMaiorMedia = (int *)malloc(tam * sizeof(int)); 
    

    preencherVetorInscricoes(n, inscr);
    mostrarVetor(n, inscr);
    
    printf("\n> Informe as notas do 1º teste de cada participante: ");
    preencherNotas(n, inscr, t1);
    printf("\n> Informe as notas do 2º teste de cada participante: ");
    preencherNotas(n, inscr, t2);

    printf("\n> Mostrando as notas dos %d participantes\n", n);
    printf("\n>>>>> 1º TESTE <<<<<");
    mostrarNotas(n, inscr, t1);
    printf("\n>>>>> 2º TESTE <<<<<");
    mostrarNotas(n, inscr, t2);

    printf("\n> Informe peso da nota 1: ");
    scanf("%d", &p1);
    
    printf("> Informe peso da nota 2: ");
    scanf("%d", &p2);

    calcularMediaPonderada(n, p1, t1, p2, t2, mediasPonderadas);

    printf("\n>>>>>>>>>> MÉDIAS PONDERADAS <<<<<<<<<<<");
    mostrarMedias(n, inscr, mediasPonderadas);

    premiados(n, inscricaoMaiorMedia, mediasPonderadas, inscr, &tam);
    mostrarInscricoesMaiorMedia(inscricaoMaiorMedia, tam);

    return 0;
}

void preencherVetorInscricoes(int n, int *v){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("Informe a inscrição do %dº participante: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nVetor preenchido!\n\n");
}

void mostrarVetor(int n, int *v){
    printf("\n>> INSCRIÇÕES REALIZADAS <<");
    printf("\n> Quantidade: %d\n", n);
    for (int i = 0; i < n; i++){
        printf("\n%dª inscrição: nº %d", i+1, v[i]);
    }
    printf("\n\nExibido com sucesso!\n");
}

void preencherNotas(int n, int *inscricao, float *v){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("Participante (inscrição: nº %d): ", inscricao[i]);
        scanf("%f", &v[i]);
    }
    printf("\nVetor preenchido!\n\n");
}

void mostrarNotas(int n, int *v, float *notas){
    for (int i = 0; i < n; i++){
        printf("\n%dº participante -> (inscrição: %d): %.1f", i+1, v[i], notas[i]);
    }
    printf("\n>>>>>>>>>><<<<<<<<<<\n");
    printf("\nExibido com sucesso!\n");
}

void calcularMediaPonderada(int n, int peso1, float *notas1, int peso2, float *notas2, float *medias){
    for (int i = 0; i < n; i++){
        medias[i] = ((notas1[i] * peso1) + (notas2[i] * peso2)) / (peso1 + peso2);
    }
    printf("\nMédias ponderadas calculadas!\n");
}

void mostrarMedias(int n, int *v, float *medias){
    for (int i = 0; i < n; i++){
        printf("\nMédia do %dº participante -> (inscrição: %d): %.2f", i+1, v[i], medias[i]);
    }
    printf("\n>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<\n");
    printf("\nExibido com sucesso!\n");
}

int *premiados(int n, int *inscrMaior, float *medias, int *inscricoes, int *tamanho){
    float maior = medias[0];
    for (int i = 0; i < n; i++){
        if(medias[i] >= maior){
            maior = medias[i];
            inscrMaior[*tamanho] = inscricoes[i];
            (*tamanho)++;
        }
    }
    return inscrMaior;
}

void mostrarInscricoesMaiorMedia(int *inscrMaior, int tamanho){
    printf("\n----------PREMIADOS------------\n");
    printf("\n> PARTICIPANTES Nº: [");
    for (int i = 0; i < tamanho; i++){
        printf("%d, ", inscrMaior[i]);
    }
    printf("\b\b]\n");
    printf("\n-------------------------------\n");
    printf("\nExibido com sucesso!\n");
}