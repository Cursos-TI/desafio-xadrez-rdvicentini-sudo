#include <stdio.h>

// Constantes para o número de casas a serem movidas
// Requisito: Valores definidos diretamente no código através de constantes
#define TORRE_CASAS 5
#define BISPO_CASAS 5
#define RAINHA_CASAS 8

// Função principal
int main() {
    // Requisito: Utilizar apenas variáveis do tipo inteiro (para contagem e limites)
    int i; // Variável de iteração para o loop for (Torre)
    int casas_movidas_bispo = 0; // Contador para o loop while (Bispo)
    int casas_movidas_rainha = 0; // Contador para o loop do-while (Rainha)

    // -----------------------------------------------------------------
    // SIMULAÇÃO DA TORRE (ROOK)
    // Movimento: 5 casas para a direita (Horizontal/Vertical)
    // Estrutura de Repetição: for
    // -----------------------------------------------------------------
    printf("==================================================\n");
    printf("SIMULAÇÃO: TORRE (5 casas para a Direita) - Usando 'for'\n");
    printf("==================================================\n");

    // Loop 'for' para simular o movimento da Torre
    // A Torre se move em linha reta. Simulação de 5 casas para a direita.
    for (i = 0; i < TORRE_CASAS; i++) {
        // Requisito: Imprimir a direção do movimento a cada casa percorrida
        printf("Direita\n");
    }

    printf("\n");

    // -----------------------------------------------------------------
    // SIMULAÇÃO DO BISPO (BISHOP)
    // Movimento: 5 casas na diagonal para cima e à direita
    // Estrutura de Repetição: while
    // -----------------------------------------------------------------
    printf("==================================================\n");
    printf("SIMULAÇÃO: BISPO (5 casas na diagonal Cima e Direita) - Usando 'while'\n");
    printf("==================================================\n");

    // Loop 'while' para simular o movimento do Bispo
    // O Bispo se move na diagonal. Simulação de 5 casas na diagonal Cima e Direita.
    while (casas_movidas_bispo < BISPO_CASAS) {
        // Requisito: Imprimir a combinação de duas direções para a diagonal
        printf("Cima Direita\n");
        
        // Incrementa o contador
        casas_movidas_bispo++;
    }

    printf("\n");

    // -----------------------------------------------------------------
    // SIMULAÇÃO DA RAINHA (QUEEN)
    // Movimento: 8 casas para a esquerda (Todas as direções)
    // Estrutura de Repetição: do-while
    // -----------------------------------------------------------------
    printf("==================================================\n");
    printf("SIMULAÇÃO: RAINHA (8 casas para a Esquerda) - Usando 'do-while'\n");
    printf("==================================================\n");

    // Loop 'do-while' para simular o movimento da Rainha
    // A Rainha se move em todas as direções. Simulação de 8 casas para a esquerda.
    do {
        // Requisito: Imprimir a direção do movimento a cada casa percorrida
        printf("Esquerda\n");
        
        // Incrementa o contador
        casas_movidas_rainha++;
    } while (casas_movidas_rainha < RAINHA_CASAS);

    printf("==================================================\n");

    return 0;
}
