#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include "conta.h"
#include "menuConta.h"

void operacoesConta(Banco *banco, int numeroConta){
    char menu2[] = "\n>>> Sistema Bancário 'Banco R1' <<<\n1 - Mostrar Saldo\n2 - Saque\n3 - Depósito\n4 - Transferência via PIX\n5 - Extrato Bancário \n\n0 - Retornar ao menu principal\n>>> ";
    
    int valida = 1;
    Conta *contaOrigem = consultarDadosConta(banco, numeroConta);
    contaOrigem->numTransacoes = 0;  
    system("cls");

    int opcao;

    while (valida == 1){
        printf("\n---------- Banco %s ----------\n", banco->nome);
        printf("> %s \n", banco->endereco);
        printf("------------------------------\n");
        printf("%s", menu2);
        scanf("%d", &opcao);
        if(opcao == 0){
            printf("\nVocê retornou ao Menu Principal...");
            valida = 0;
        }
        if(opcao == 1){
            system("cls");
            float saldo = consultarSaldo(contaOrigem);
            printf("\n----- Conta nº %d -----\n", contaOrigem->numConta);
            printf("Saldo: R$ %.2f", saldo);
            printf("\n--------------------------\n");
        }else if (opcao == 2){
            system("cls");
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
                    registrarTransacao(contaOrigem, 1, valor, 0); // Tipo 1 representa saque
                }else{
                    printf("\n>> Saldo insuficiente!\n");
                }
            }else{
                printf("\n>> Operação cancelada!\n");
            }
        
        }else if(opcao == 3){
            system("cls");
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
                registrarTransacao(contaOrigem, 2, valor, 4);
            }else{
                printf("\n>> Operação cancelada!\n");
            }
        }else if(opcao == 4){
            system("cls");
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
                printf("Confirma a transferência no valor de R$ %.2f para conta nº %d? (s - sim / n - não): ", valor, contaDestino->numConta);
                scanf("%s", validacao);
                if(validacao[0] == 's'){
                    if(transferirValor(contaOrigem, contaDestino, valor) == 1){
                        printf("\n>> Transferencia realizada com sucesso!\n");
                        registrarTransacao(contaOrigem, 3, valor, contaDestino->numConta); // Tipo 3 representa transferência
                    }else{
                        printf("\n>> Saldo insuficiente na conta nº %d!\n", contaOrigem->numConta);
                    }
                }else{
                    printf("\n>> Operação cancelada!\n");
                }
            }
        }else if (opcao == 5){
            printf("\n----- Extrato Bancário da Conta nº %d -----\n", contaOrigem->numConta);
            printf("Data/Hora: %s", asctime(localtime(&contaOrigem->transacoes->dataHora)));
            printf("    >> Saldo: R$ %.2f\n", contaOrigem->saldo);
            extratoBancario(contaOrigem);
        }
        if(opcao != 0){
            char cont[2];
            printf("\nDeseja continuar? (s - sim/ n - não): ");
            scanf("%s", &cont);
            if(cont[0] == 's'){
                system("cls");  
            }else if(cont[0] == 'n'){
                printf("\nVocê retornou ao Menu Principal...");
                valida = 0;
            }
        }
    }
}

