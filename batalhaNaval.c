#include <stdio.h>

#define TAMANHO 10      // Tamanho fixo do tabuleiro (10x10)
#define NAVIO 3         // Valor que representa o navio no tabuleiro
#define AGUA 0          // Valor que representa água no tabuleiro
#define TAMANHO_NAVIO 3 // Comprimento fixo dos navios

int main() {
    int tabuleiro[TAMANHO][TAMANHO]; // matriz 10x10 para o tabuleiro
    int navioHorizontal[TAMANHO_NAVIO]; // vetor para navio horizontal
    int navioVertical[TAMANHO_NAVIO];   // vetor para navio vertical

    int i, j;

    // -------------------- Inicializar o Tabuleiro --------------------
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA; // começa tudo como água
        }
    }

    // -------------------- Definir coordenadas iniciais --------------------
    // Posição inicial do navio horizontal (linha, coluna)
    int linhaH = 2, colunaH = 1; 
    // Posição inicial do navio vertical (linha, coluna)
    int linhaV = 5, colunaV = 7; 

    // -------------------- Posicionar Navio Horizontal --------------------
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        navioHorizontal[i] = NAVIO; // preenche o vetor com o valor NAVIO
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i]; // coloca no tabuleiro
    }

    // -------------------- Posicionar Navio Vertical --------------------
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        navioVertical[i] = NAVIO; 
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // -------------------- Exibir Tabuleiro --------------------
    printf("Tabuleiro Batalha Naval (0 = Agua, 3 = Navio):\n\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}