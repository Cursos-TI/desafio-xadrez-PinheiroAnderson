#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este programa simula a movimentação de três peças: Bispo, Torre e Rainha.
// Cada peça utiliza um tipo diferente de estrutura de repetição.

int main() {
    // ==================== CONSTANTES ====================
    const int CASAS_BISPO = 5;   // Número de casas que o Bispo se move
    const int CASAS_TORRE = 5;   // Número de casas que a Torre se move
    const int CASAS_RAINHA = 8;  // Número de casas que a Rainha se move

    // ==================== TORRE ====================
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Aqui, simulamos 5 movimentos para a direita usando FOR
    printf("===== Movimento da Torre (Direita) =====\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==================== BISPO ====================
    // O Bispo move-se na diagonal (cima + direita)
    // Aqui, simulamos 5 movimentos usando WHILE
    printf("===== Movimento do Bispo (Diagonal Cima Direita) =====\n");
    int i = 1;
    while (i <= CASAS_BISPO) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ==================== RAINHA ====================
    // A Rainha move-se em todas as direções
    // Aqui, simulamos 8 movimentos para a esquerda usando DO-WHILE
    printf("===== Movimento da Rainha (Esquerda) =====\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= CASAS_RAINHA);

    
    return 0;
}
