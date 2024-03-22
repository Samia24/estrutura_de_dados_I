#include <stdio.h>

void preencherVetor(int n, int *v);
void intercalarVetor(int n, int *v1, int *v2, int *v3);
void mostrarVetor(int n, int *vetor);

int main(){
    int n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor1[n];
    int vetor2[n];

    preencherVetor(n, vetor1);
    preencherVetor(n, vetor2);

    int vetor3[2 * n];
    intercalarVetor(n, vetor1, vetor2, vetor3);
    mostrarVetor( 2 * n, vetor3);
    
    return 0;
}

void preencherVetor(int n, int *v){
    for (int i = 0; i < n; i++){
        printf("Informe o %dº valor do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Vetor preenchido!\n\n");
}

void mostrarVetor(int n, int *vetor){
    printf("\n> Mostrando vetor de %d elementos\n", n);
    printf("[");
    for (int i = 0; i < n; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\b\b]\n");
    printf("\nExibido com sucesso!");
}

void intercalarVetor(int n, int *v1, int *v2, int *v3){
    int i = 0;
    int j = 0;
    
    for(int k = 0; k < 2*n; k++){
        if(k % 2 != 0){
            v3[k]= v1[i];
            i++;
        }else{
            v3[k] = v2[j];
            j++;
        }
    }

    printf("Intercalação ok!\n");
}
