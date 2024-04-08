#include <stdio.h>
#include <stdlib.h>
#include "banco.h"
#include "titular.h"
#include "conta.h"

Banco *novoBanco(){
    Banco *novoBanco = (Banco *) malloc(sizeof(Banco));
    novoBanco->numContas = 0;
    return novoBanco;   
}


int abrirConta(Banco *banco, Conta *conta){
    if (banco->numContas >= qtdMaxContas) {
        printf("Limite de contas atingido\n");
        return 0;
    }

    conta->numConta = rand() % 9000 + 1000;
    conta->saldo = 0.00;
    
    // Adiciona a nova conta à lista de contas do banco
    banco->contas[banco->numContas] = conta;
    banco->numContas++;
    
    printf("\n> Conta aberta com sucesso! <\n");
    return conta->numConta;
}

void listarContas(Banco *banco){
    if(banco->numContas == 0){
        printf("\n> Não há contas cadastradas!\n");
    }
    for(int i = 0; i < banco->numContas; i++){
        printf("\n----- Conta nº %d -----\n", banco->contas[i]->numConta);
        printf("Nome: %s", banco->contas[i]->titular->nomeTitular);
        printf("\nCPF: %d", banco->contas[i]->titular->cpfTitular);
        printf("\nEndereço: %s", banco->contas[i]->titular->enderecoTitular);
        printf("\nRenda: R$ %.2f", banco->contas[i]->titular->renda);
        printf("\n--------------------------\n");       
    }   
}

int verificarConta(Banco *banco, int numeroConta){
    for(int i = 0; i < banco->numContas; i++){
        if(banco->contas[i]->numConta == numeroConta){
                return 1;     
        }
    }
    printf("\nConta inexistente!\n");
    return 0;
}

Conta* consultarDadosConta(Banco *banco, int numeroConta){
    for(int i = 0; i < banco->numContas; i++){
        if(banco->contas[i]->numConta == numeroConta){
                return banco->contas[i];     
        }
    }
            
}

Conta* consultarPIX(Banco *banco, int chavePIX){
    for(int i = 0; i < banco->numContas; i++){
        if(banco->contas[i]->titular->cpfTitular == chavePIX){   
            return banco->contas[i];  
        }
    }    

}

int verificarPIX(Banco *banco, int chavePIX){
    for(int i = 0; i < banco->numContas; i++){
        if(banco->contas[i]->titular->cpfTitular == chavePIX){   
            return 1;     
        }
    }
    printf("\nConta inexistente!\n");
    return 0;
}


