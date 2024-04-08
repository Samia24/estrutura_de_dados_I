#ifndef TITULAR_H
#define TITULAR_H

#include <stdlib.h>


typedef struct titular
{
    char nomeTitular[120];
    int cpfTitular;
    char enderecoTitular[120];
    float renda;

}Titular;

// Protótipos das funções
Titular *novoTitular();


#endif