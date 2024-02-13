#include <stdio.h>

int main() {
    float velocidade_m_s;

    // Solicita ao usuário a velocidade em m/s e armazena o valor lido na variável velocidade_m_s
    printf("Informe a velocidade em m/s: ");
    scanf("%f", &velocidade_m_s);

    // Calcula a velocidade em km/h multiplicando a velocidade em m/s por 3.6
    float velocidade_km_h = velocidade_m_s * 3.6;

    // Imprime o resultado
    printf("\n> A velocidade de %.1f m/s equivale a %.1f km/h.\n", velocidade_m_s, velocidade_km_h);

    return 0;
}