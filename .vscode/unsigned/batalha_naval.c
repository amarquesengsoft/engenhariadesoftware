#include <stdio.h>

    int main(){

    // Matriz que representa o tabuleiro
    int tabuleiro[10][10];

    // Arrays que representam os dois navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};
    int i, j;
 
    // Loop de repetição que preenche todas as posições do tabuleiro com 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal: começa na linha 2, coluna 4
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    // Navio vertical: começa na linha 5, coluna 1
    int linhaVertical = 5;
    int colunaVertical = 1;


    // Copia os valores do vetor navioHorizontal para o tabuleiro
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

   
    // Copia os valores do vetor navioVertical para o tabuleiro
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }


    // Exibição do tabuleiro
    printf("TABULEIRO BATALHA NAVAL (10x10)\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
    for (j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }

    return 0;


    }