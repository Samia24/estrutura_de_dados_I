#ifndef BANCO_H
#define BANCO_H
#include "conta.h"

#define qtdMaxContas 10

//Estruturas

typedef struct banco
{
    Conta* contas[10];
    int numContas;
    char nome[50];
    char endereco[120];

}Banco;

//Protótipos
Banco *novoBanco();
int abrirConta(Banco *banco, Conta *conta);
void listarContas(Banco *banco);
int verificarConta(Banco *banco, int numeroConta);
Conta* consultarDadosConta(Banco *banco, int numeroConta);
int verificarPIX(Banco *banco, int chavePIX);
Conta* consultarPIX(Banco *banco, int chavePIX);

#endif