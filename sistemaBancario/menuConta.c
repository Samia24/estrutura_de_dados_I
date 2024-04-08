#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include "conta.h"
#include "menuConta.h"

void operacoesConta(Banco *banco){
    char menu2[] = "\n>>> Sistema Bancário 'Banco R1' <<<\n1 - Mostrar Saldo\n2 - Saque\n3 - Depósito\n4 - Transferência via PIX \n\n0 - Retornar ao menu principal\n>>> ";
    
    int numeroConta;
    printf("\n> Informe o número da Conta: ");
    scanf("%d", &numeroConta);
    int valida = verificarConta(banco, numeroConta);
    Conta *contaOrigem = consultarDadosConta(banco, numeroConta);
    

    int opcao;

    while (valida == 1){
        printf("%s", menu2);
        scanf("%d", &opcao);
        if(opcao == 0){
            valida = 0;
        }
        if(opcao == 1){
            float saldo = consultarSaldo(contaOrigem);
            printf("\n----- Conta nº %d -----\n", contaOrigem->numConta);
            printf("\nSaldo: R$ %.2f", saldo);
            printf("\n--------------------------\n");       
        }else if (opcao == 2){
            float valor;
            char validacao[2];

            printf("\n>> Operação de Saque <<");
            printf("\nInforme o valor que deseja sacar: R$ ");
            scanf("%f", &valor);

            printf("Confirma o saque no valor de R$ %.2f (s - sim / n - não): ", valor);
            scanf("%s", validacao);
            if(validacao[0] == 's'){
                if(sacarValor(contaOrigem, valor) == 1){
                    printf("\n>> Saque realizado com sucesso!\n");
                }else{
                    printf("\n>> Saldo insuficiente!\n");
                }
            }else{
                printf("\n>> Operação cancelada!\n");
            }
        }else if(opcao == 3){
            float valor;
            char validacao[2];

            printf("\n>> Operação de Depósito <<");
            printf("\nInforme o valor que deseja depositar: R$ ");
            scanf("%f", &valor);

            printf("Confirma o depósito no valor de R$ %.2f (s - sim / n - não): ", valor);
            scanf("%s", validacao);
            if(validacao[0] == 's'){
                depositarValor(contaOrigem, valor);
                printf("\n>> Depósito realizado com sucesso!\n");
            }else{
                printf("\n>> Operação cancelada!\n");
            }
        }else if(opcao == 4){
            float valor;
            char validacao[2];

            printf("\n>> Operação de Transferência <<");

            int chavePIX;
            printf("\nInforme o chave PIX da conta destino para transferência: ");
            scanf("%d", &chavePIX);

            int valida2 = verificarPIX(banco, chavePIX);
            Conta *contaDestino = consultarPIX(banco, chavePIX);

            if (valida2 == 1) {
                printf("\nInforme o valor que deseja transferir: R$ ");
                scanf("%f", &valor);
                printf("Confirma o depósito no valor de R$ %.2f (s - sim / n - não): ", valor);
                scanf("%s", validacao);
                if(validacao[0] == 's'){
                    if(transferirValor(contaOrigem, contaDestino, valor) == 1){
                        printf("\n>> Transferencia realizada com sucesso!\n");
                    }else{
                        printf("\n>> Saldo insuficiente na conta nº %d!\n", contaOrigem->numConta);
                    }
                }else{
                printf("\n>> Operação cancelada!\n");
                }
            }
        }       
    }
}
