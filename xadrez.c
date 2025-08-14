#include <stdio.h>

// ================= CONSTANTES =================
const int CASAS_TORRE   = 5; // Movimento da Torre (direita)
const int CASAS_BISPO   = 5; // Movimento do Bispo (diagonal cima-direita)
const int CASAS_RAINHA  = 8; // Movimento da Rainha (esquerda)
const int CAVALO_CIMA   = 2; // Movimento vertical do Cavalo
const int CAVALO_DIR    = 1; // Movimento horizontal do Cavalo

// =============================================================
// FUNÇÃO RECURSIVA - Torre (Direita)
// =============================================================
void moverTorre(int passo, int total) {
    if (passo > total) return; // Condição de parada
    printf("Direita\n");
    moverTorre(passo + 1, total); // Chamada recursiva para o próximo passo
}

// =============================================================
// FUNÇÃO RECURSIVA + LOOPS ANINHADOS - Bispo (Cima Direita)
// =============================================================
void moverBispo(int passo, int total) {
    if (passo > total) return;

    // Loop externo = movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno = movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passo + 1, total); // Recursão para próximo passo
}

// =============================================================
// FUNÇÃO RECURSIVA - Rainha (Esquerda)
// =============================================================
void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, total); // Chamada recursiva
}

// =============================================================
// LOOPS COMPLEXOS - Cavalo (2 Cima + 1 Direita)
// =============================================================
void moverCavalo() {
    int movimentosVerticais = 0;
    int movimentosHorizontais = 0;

    // Loop externo: controla movimento vertical e horizontal
    for (int v = 0, h = 0; v <= CAVALO_CIMA || h <= CAVALO_DIR; v++, h++) {

        if (v < CAVALO_CIMA) {
            printf("Cima\n");
            movimentosVerticais++;
            if (movimentosVerticais == CAVALO_CIMA) {
                continue; // Passa para movimento horizontal
            }
        }

        if (movimentosVerticais == CAVALO_CIMA && movimentosHorizontais < CAVALO_DIR) {
            printf("Direita\n");
            movimentosHorizontais++;
            if (movimentosHorizontais == CAVALO_DIR) {
                break; // Movimento do Cavalo concluído
            }
        }
    }
}

// =============================================================
// MAIN
// =============================================================
int main() {
    // Torre
    printf("===== Movimento da Torre (Direita) =====\n");
    moverTorre(1, CASAS_TORRE);
    printf("\n");

    // Bispo
    printf("===== Movimento do Bispo (Diagonal Cima Direita) =====\n");
    moverBispo(1, CASAS_BISPO);
    printf("\n");

    // Rainha
    printf("===== Movimento da Rainha (Esquerda) =====\n");
    moverRainha(1, CASAS_RAINHA);
    printf("\n");

    // Cavalo
    printf("===== Movimento do Cavalo (2 Cima + 1 Direita) =====\n");
    moverCavalo();
    printf("\n");

    return 0;
}
