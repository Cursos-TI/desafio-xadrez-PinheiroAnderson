#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato + Nível Aventureiro
// Este programa simula os movimentos da Torre, Bispo, Rainha e Cavalo.
// Cada peça utiliza uma estrutura de repetição diferente para praticar o uso de loops.

int main() {
    // ==================== CONSTANTES ====================
    const int CASAS_BISPO = 5;     // Número de casas que o Bispo se move
    const int CASAS_TORRE = 5;     // Número de casas que a Torre se move
    const int CASAS_RAINHA = 8;    // Número de casas que a Rainha se move
    const int CASAS_CAVALO_BAIXO = 2; // Movimento vertical do Cavalo
    const int CASAS_CAVALO_ESQ = 1;   // Movimento horizontal do Cavalo

    // ==================== TORRE ====================
    printf("===== Movimento da Torre (Direita) =====\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==================== BISPO ====================
    printf("===== Movimento do Bispo (Diagonal Cima Direita) =====\n");
    int i = 1;
    while (i <= CASAS_BISPO) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ==================== RAINHA ====================
    printf("===== Movimento da Rainha (Esquerda) =====\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= CASAS_RAINHA);
    printf("\n");

    // ==================== CAVALO ====================
    // Movimento em "L": 2 casas para baixo + 1 casa para a esquerda
    // Loop externo (FOR) = movimento para baixo
    // Loop interno (WHILE) = movimento para a esquerda
    printf("===== Movimento do Cavalo (2 Baixo + 1 Esquerda) =====\n");

    for (int passoBaixo = 1; passoBaixo <= CASAS_CAVALO_BAIXO; passoBaixo++) {
        printf("Baixo\n");
    }

    int passoEsq = 1;
    while (passoEsq <= CASAS_CAVALO_ESQ) {
        printf("Esquerda\n");
        passoEsq++;
    }

    return 0;
}
