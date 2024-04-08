#ifndef CONTA_H
#define CONTA_H
#include <stdio.h>
#include "titular.h"


typedef struct conta
{
    int numConta;
    Titular *titular;
    float saldo;

}Conta;

//Protótipos das funções
Conta *novaConta();
void preencherDados(Conta *conta);
float consultarSaldo(Conta *conta);
int sacarValor(Conta *conta, float valor);
void depositarValor(Conta *conta, float valor);
int transferirValor(Conta* origem, Conta* destino, float valor);


#endif