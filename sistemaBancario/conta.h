#ifndef CONTA_H
#define CONTA_H
#include <stdio.h>
#include "titular.h"
#include "time.h"
#define MaxTransacoes 100

typedef struct transacao {
    int tipo; // Tipo da transação: 0 - Consulta de saldo, 1 - Saque, 2 - Depósito, 3 - Transferência
    float valor; 
    int numContaDestino; // Número da conta destino (apenas para transações de transferência)
    time_t dataHora; 
} Transacao;

typedef struct conta
{
    int numConta;
    Titular *titular;
    float saldo;
    Transacao transacoes[MaxTransacoes]; // Array para armazenar transações
    int numTransacoes; // Número atual de transações na conta
}Conta;


//Protótipos das funções
Conta *novaConta();
void preencherDados(Conta *conta);
float consultarSaldo(Conta *conta);
int sacarValor(Conta *conta, float valor);
void depositarValor(Conta *conta, float valor);
int transferirValor(Conta* origem, Conta* destino, float valor);
void registrarTransacao(Conta *conta, int tipo, float valor, int numContaDestino);
void extratoBancario(Conta *conta);

#endif