#include <stdio.h>

#define LINHA 10
#define COLUNA 9

int main() {

    int navyWar[10][10] = {{0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,0,0}};

    
    printf("Tabuleiro inicial:\n");
    for(int x = 0 ; x < LINHA ; x++){
        for(int y = 0 ; y <= COLUNA ; y++){
            printf("%d ", navyWar[x][y]);
        }
        printf("\n");
    }

    printf("\nAdicionando navios:\n");
    // Navio horizontal
    for (int c = 1; c <= 3; c++) {
        navyWar[3][c] = 3;
    }

    // Navio vertical
    for (int l = 4; l <= 6; l++) {
        navyWar[l][7] = 3;
    }

    // Navio diagonal principal (↘)
    for (int i = 0; i < 4; i++) {
        navyWar[i][i] = 3;
    }

    // Navio diagonal secundária
    for (int i = 0; i < 4; i++) {
        navyWar[i][9 - i] = 3;
    }

        for (int l = 0; l < LINHA; l++) {
            for (int c = 0; c < COLUNA; c++) {
                 printf("%d ", navyWar[l][c]);
                }
        printf("\n");
    }




   
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0