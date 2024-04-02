#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    int matricula;
    char nome[120];
    int idade;
    float renda;
};

void pedirDados(struct aluno *novoAluno);
void listarAlunos(struct aluno *alunos, int qtdAlunos);
void atualizarAlunos(struct aluno *alunos, int qtdAlunos);
void buscarAlunosPorMatricula(struct aluno *alunos, int qtdAlunos);
void buscarAlunosPorNome(struct aluno *alunos, int qtdAlunos);
void removerAluno(struct aluno *alunos, int *qtdAlunos);

int main() {
    struct aluno *alunos;
    alunos = (struct aluno *)malloc(10 * sizeof(struct aluno));
    int qtd_alunos = 0;

    char menu[] = "\n>>> SysAlunos <<<\n1 - Add Aluno\n2 - Listar Alunos\n3 - Atualizar Aluno \n4 - Remover Aluno \n5 - Buscar Aluno por matrícula \n6 - Buscar Aluno por nome \n\n0 - Sair\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            struct aluno novoAluno;
            pedirDados(&novoAluno);
            alunos[qtd_alunos] = novoAluno;
            qtd_alunos++;
        } else if (opcao == 2) {
            listarAlunos(alunos, qtd_alunos);
        } else if (opcao == 3) {
            atualizarAlunos(alunos, qtd_alunos);
        }  else if (opcao == 4) {
            removerAluno(alunos, &qtd_alunos);
        } else if (opcao == 5) {
            buscarAlunosPorMatricula(alunos, qtd_alunos);
        } else if (opcao == 6) {
            buscarAlunosPorNome(alunos, qtd_alunos);
        }

        // system("clear");
        printf("%s", menu);
        scanf("%d", &opcao);
    }
}

void pedirDados(struct aluno *novoAluno) {
    printf("Matrícula: ");
    scanf("%d", &novoAluno->matricula);

    printf("Nome: ");
    scanf(" %120[^\n]", novoAluno->nome);
}

void listarAlunos(struct aluno *alunos, int qtdAlunos) {
    printf("\nAlunos Cadastrados\n");

    for (int i = 0; i < qtdAlunos; i++) {
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
    }
    printf("------------------\n");
}

void atualizarAlunos(struct aluno *alunos, int qtdAlunos) {
    printf("\n> Atualizar Aluno por Matrícula <\n");
    int numMatricula;
    printf("Informe o número de matrícula do aluno para atualizar os dados: ");
    scanf("%d", &numMatricula);

    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == numMatricula) {
            printf("\n> Informe os novos dados do aluno => %s \n<", alunos[i].nome);
            pedirDados(&alunos[i]);
            printf("Dados atualizados com sucesso!");
        }else{
            printf("Matrícula não encontrada !");
        }
    }
    printf("------------------\n");
}

void buscarAlunosPorMatricula(struct aluno *alunos, int qtdAlunos) {
    printf("\n> Buscar Aluno por Matrícula <\n");
    int numMatricula;
    printf("Informe o número de matrícula do aluno: ");
    scanf("%d", &numMatricula);

    printf("\n\n> Resultado da busca: ");
    printf("\n------------------");

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == numMatricula) {
            printf("\n> Matrícula: %d", alunos[i].matricula);
            printf("\n> Nome: %s", alunos[i].nome);
            encontrado = 1;
        }
    }
    if(!encontrado){
        printf("Matrícula não encontrada !");
    }
    printf("\n------------------\n");
}

void buscarAlunosPorNome(struct aluno *alunos, int qtdAlunos) {
    printf("\n> Buscar Aluno por Nome ou parte dele <\n");
    char nomeAluno[120];
    printf("Informe o nome (ou parte dele) do aluno: ");
    scanf(" %119[^\n]", nomeAluno);

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if(strstr(alunos[i].nome, nomeAluno) != NULL){
            if(!encontrado){
                printf("\n> Alunos encontrados!\n");
            }
            printf("\nNome: %s", alunos[i].nome);
            printf("\nMatrícula: %d\n", alunos[i].matricula);
            encontrado = 1;
        }
    }
}

void removerAluno(struct aluno *alunos, int *qtdAlunos){
    int numMatricula;
    printf("\nInforme a matrícula do aluno que deseja remover: ");
    scanf("%d", &numMatricula);
    int encontrado = 0;
     for(int i = 0; i < *qtdAlunos; i++){
        if(alunos[i].matricula == numMatricula){
            encontrado = 1;

            for (int j = i; j < (*qtdAlunos -1); j++)
            {
                alunos[j] = alunos[j + 1];
            }
            (*qtdAlunos)--;
            printf("Aluno com Matrícula - %d, foi removido com sucesso!\n", numMatricula);
        }
     }

}
