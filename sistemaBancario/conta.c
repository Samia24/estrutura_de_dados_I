#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#include "titular.h"
#include "banco.h"

Conta *novaConta(){
    Conta *novaConta = (Conta *) malloc(sizeof(Conta));
    novaConta->titular = novoTitular();
    return novaConta;   
}

void preencherDados(Conta *conta){
    printf("\n--- Dados do Titular da conta ---");
    printf("\n Nome: ");
    scanf(" %[^\n]", conta->titular->nomeTitular); // %[] é usado para capturar toda a linha, incluindo espaços
    printf(" CPF: ");
    scanf("%d", &conta->titular->cpfTitular);
    printf(" Endereço: ");
    scanf(" %[^\n]", conta->titular->enderecoTitular);
    printf(" Renda: R$ ");
    scanf("%f", &conta->titular->renda);
    printf("---------------------------------\n");
}

float consultarSaldo(Conta *conta){
    return conta->saldo;   
}

int sacarValor(Conta *conta, float valor){
    
    if(conta->saldo >= valor){
        conta->saldo -= valor;
        return 1;
    }else{
        return 0;
    }
     
}


void depositarValor(Conta *conta, float valor){
    conta->saldo += valor;
}

int transferirValor(Conta* origem, Conta* destino, float valor) {
    if(sacarValor(origem, valor) == 1){
        depositarValor(destino, valor);
        return 1;
    }else{
        return 0;
    }
}

void registrarTransacao(Conta *conta, int tipo, float valor, int numContaDestino) {
    if (conta->numTransacoes < MaxTransacoes) {
        Transacao *transacao = &conta->transacoes[conta->numTransacoes];
        transacao->tipo = tipo;
        transacao->valor = valor;
        transacao->numContaDestino = numContaDestino;
        time(&transacao->dataHora); // Obtém a data e hora atual
        conta->numTransacoes++;
    } else {
        printf("Erro: Limite de transações atingido\n");
    }
}


void extratoBancario(Conta *conta) {
    for (int i = 0; i < conta->numTransacoes; i++) {
        printf("Tipo: %d - ", conta->transacoes[i].tipo);
        if (conta->transacoes[i].tipo == 1) {
            printf("Saque - Valor: -R$ %.2f\n", conta->transacoes[i].valor);
        } else if (conta->transacoes[i].tipo == 2) {
            printf("Depósito - Valor: +R$ %.2f\n", conta->transacoes[i].valor);
        } else if (conta->transacoes[i].tipo == 3) {
            printf("Transferência - Valor: -R$ %.2f > Conta Destino: %d\n", conta->transacoes[i].valor, conta->transacoes[i].numContaDestino);
        }
    }

    printf("----------------------------------------------\n");
}



