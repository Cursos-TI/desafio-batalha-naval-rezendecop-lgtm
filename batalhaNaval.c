#include <stdio.h>

int main() {

    // Título
    printf("=== Batalha Naval ===\n\n");

    int tabuleiro[10][10];

    // Inicializar tabuleiro com zero (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal (3 casas)
    // Exemplo: linha 2, colunas 3 até 5
    int linhaH = 2;   // índice 2 = linha 3 para o humano
    int inicioH = 3;  // coluna D (0=A, 1=B, 2=C, 3=D)
    int fimH = 5;

    for (int c = inicioH; c <= fimH; c++) {
        tabuleiro[linhaH][c] = 3;
    }

    // Navio vertical (3 casas)
    // Exemplo: coluna 7 (H), linhas 4 até 6
    int colunaV = 7;
    int inicioV = 4;
    int fimV = 6;

    for (int l = inicioV; l <= fimV; l++) {
        tabuleiro[l][colunaV] = 3;
    }

    // Imprimir o tabuleiro
    printf("Tabuleiro Batalha Naval:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}