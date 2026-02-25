#include <stdio.h>
#include <stdlib.h>

#define TAM 100

// Estrutura da carta
typedef struct {
    char estado[TAM];
    char codigo[4]; // 1 letra + 2 números + '\0'
    char cidade[TAM];
    float area;
    float pib;
    int populacao;
    int pontosTuristicos;
} Carta;

// Função para cadastrar carta
void cadastrarCarta(Carta *c) {
    printf("\n--- Cadastro da Carta ---\n");

    printf("Nome do Estado: ");
    fgets(c->estado, TAM, stdin);

    printf("Código da Carta (Letra + 2 números, ex: A01): ");
    fgets(c->codigo, 4, stdin);
    getchar(); // limpar buffer

    printf("Nome da Cidade: ");
    fgets(c->cidade, TAM, stdin);

    printf("Área (km²): ");
    scanf("%f", &c->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &c->pib);

    printf("População: ");
    scanf("%d", &c->populacao);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    getchar(); // limpar buffer final
}

// Função para imprimir carta
void imprimirCarta(Carta c) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s", c.cidade);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("População: %d\n", c.populacao);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    Carta carta1;

    cadastrarCarta(&carta1);
    imprimirCarta(carta1);

    return 0;
}