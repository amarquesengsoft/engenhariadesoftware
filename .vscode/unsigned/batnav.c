#include <stdio.h>

    int main()
{

    // Matriz que representa o tabuleiro do jogo (10x10)
    int tabuleiro[10][10];

    // Vetores que representam os dois navios
    // Cada posição do vetor contém o valor 3, que será copiado para o tabuleiro
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // Variáveis de controle dos loops
    int i, j;

    // ==========================================================
    // 1. INICIALIZAÇÃO DO TABULEIRO
    // ==========================================================
    // Preenche todas as posições do tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ==========================================================
    // 2. DEFINIÇÃO DAS COORDENADAS INICIAIS DOS NAVIOS
    // ==========================================================
    // Navio horizontal: começa na linha 2, coluna 4
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    // Navio vertical: começa na linha 5, coluna 1
    int linhaVertical = 5;
    int colunaVertical = 1;

    // ==========================================================
    // 3. VALIDAÇÃO DOS LIMITES DO TABULEIRO
    // ==========================================================
    // Verifica se o navio horizontal cabe no tabuleiro
    if (colunaHorizontal + 3 > 10) {
        printf("Erro: o navio horizontal ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // Verifica se o navio vertical cabe no tabuleiro
    if (linhaVertical + 3 > 10) {
        printf("Erro: o navio vertical ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // ==========================================================
    // 4. POSICIONAMENTO DO NAVIO HORIZONTAL
    // ==========================================================
    // Copia os valores do vetor navioHorizontal para o tabuleiro
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] =
            navioHorizontal[i];
    }

    // ==========================================================
    // 5. VALIDAÇÃO DE SOBREPOSIÇÃO
    // ==========================================================
    // Verifica se alguma posição do navio vertical já está ocupada
    // pelo navio horizontal
    for (i = 0; i < 3; i++) {
        if (tabuleiro[linhaVertical + i][colunaVertical] != 0) {
            printf("Erro: os navios estão sobrepostos.\n");
            return 1;
        }
    }

    // ==========================================================
    // 6. POSICIONAMENTO DO NAVIO VERTICAL
    // ==========================================================
    // Copia os valores do vetor navioVertical para o tabuleiro
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] =
            navioVertical[i];
    }

    // ==========================================================
    // 7. EXIBIÇÃO DO TABULEIRO
    // ==========================================================
    printf("TABULEIRO BATALHA NAVAL (10x10)\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
