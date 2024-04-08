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

    

    char menu[] = "\n>>> Sistema Bancário 'Banco R1' <<<\n1 - Abrir Conta\n2 - Listar Contas\n3 - Realizar operações na Conta \n\n0 - Encerrar\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
    
        if (opcao == 1) {
            Conta *conta = novaConta();
            Titular *titular = novoTitular();
            preencherDados(conta);
            abrirConta(banco, conta);            
        } else if (opcao == 2){
            listarContas(banco);
        } else if (opcao == 3) {
            operacoesConta(banco);
            
        }
        printf("%s", menu);
        scanf("%d", &opcao);
    }
    printf("\n>> Obrigado(a) por utilizar nossos serviços! <<\n ---------- Volte Sempre ! ----------\n");

}


