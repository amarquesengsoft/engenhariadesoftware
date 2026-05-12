#include <stdio.h>
    
    int main(){

        int tabuleiro [10][10];
        int navioHorizontal[3] = {3, 3, 3};
        int navioVertical[3] = {3, 3, 3};
        int i, j;

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                tabuleiro[i][j] = 0;
            }
        }

        int linhaHorinzontal = 2;
        int colunaHorizontal = 4;

        int linhaVertical = 5;
        int colunaVertical = 1;

        for (i = 0; i < 3; i++) {
                tabuleiro[linhaHorinzontal][colunaHorizontal + i] = navioHorizontal[i];
        }

        for (i = 0; i < 3; i++) {
                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
        }
        printf("Tabuleiro BATALHA NAVAL (10 X 10)\n");
        printf("   A B C D E F G H I J\n");
            for (i = 0; i < 10; i++){
                printf("%2d ", i + 1);
                for (j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
        

        return 0;

    }
