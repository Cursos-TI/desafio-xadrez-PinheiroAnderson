#include <stdio.h>

// Constantes para o número de casas que cada peça pode se mover
const int CASAS_TORRE = 5;
const int CASAS_BISPO = 5;
const int CASAS_RAINHA = 8;
const int CASAS_CAVALO_BAIXO = 2;
const int CASAS_CAVALO_ESQ = 1;

int main() {
    // ===================== Nível Novato =====================
    printf("===== Movimento da Torre (Direita) =====\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("===== Movimento do Bispo (Cima + Direita) =====\n");
    int i = 0;
    while (i < CASAS_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }
    printf("\n");

    printf("===== Movimento da Rainha (Esquerda) =====\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < CASAS_RAINHA);
    printf("\n");

    // ===================== Nível Aventureiro =====================
    printf("===== Movimento do Cavalo (2 Baixo + 1 Esquerda - Loops Aninhados) =====\n");
    for (int passo = 0; passo < CASAS_CAVALO_BAIXO; passo++) { // Loop externo para passos "Baixo"
        printf("Baixo\n");

        // Quando chegar no último "Baixo", fazemos o movimento horizontal
        if (passo == CASAS_CAVALO_BAIXO - 1) {
            int k = 0;
            while (k < CASAS_CAVALO_ESQ) { // Loop interno (aninhado) para "Esquerda"
                printf("Esquerda\n");
                k++;
            }
        }
    }
    printf("\n");

    return 0;
}
