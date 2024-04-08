#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include "conta.h"
#include "titular.h"
#include "menuConta.h"



int main(){
    Banco *banco = (Banco *) malloc(sizeof(Banco));
    strcpy(banco->nome, "R1");
    strcpy(banco->endereco, "Avenida João XXIII, nº 1240");
    banco->numContas = 0;

    printf("\n---------- Banco %s ----------\n", banco->nome);
    printf("> %s \n", banco->endereco);
    printf("----- Seja bem-vindo(a)! -----\n");

    char menu[] = "\n>>> Sistema Bancário 'Banco R1' <<<\n1 - Abrir Conta\n2 - Listar Contas\n3 - Realizar operações na Conta \n\n0 - Encerrar\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
    
        if (opcao == 1) {
            system("cls");
            Conta *conta = novaConta();
            Titular *titular = novoTitular();
            preencherDados(conta);
            abrirConta(banco, conta);            
        } else if (opcao == 2){
            system("cls");
            listarContas(banco);
        } else if (opcao == 3) {
            int numeroConta;
            printf("\n> Informe o número da Conta: ");
            scanf("%d", &numeroConta);
            int valida = verificarConta(banco, numeroConta);
            if(valida == 1){
                operacoesConta(banco, numeroConta);          
            }
        }
        char cont[2];
        printf("\nDeseja continuar? (s - sim/ n - não): ");
        scanf("%s", &cont);
        if(cont[0] == 's'){
            system("cls");
            printf("\n---------- Banco %s ----------\n", banco->nome);
            printf("> %s \n", banco->endereco);
            printf("----- Seja bem-vindo(a)! -----\n");
            printf("%s", menu);
            scanf("%d", &opcao);
        }else if(cont[0] == 'n'){
            opcao = 0;
        }
    }
    printf("\n>> Banco %s agradece a sua visita! <<\n---------- Volte Sempre ! ----------\n\n", banco->nome);

}



