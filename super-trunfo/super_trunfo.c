#include <stdio.h>

    int main(){

        // Desafio Super Trunfo - Países
        // Tema 1 - Cadastro das cartas
        // Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
        
        char codigo_da_carta[5];
        char estado[30] ;
        char nome_da_cidade[60];
        int populacao;
        float area_em_km2;
        float pib;
        int numero_de_pontos_turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB em bilhões de R$: \n");
    scanf("%f", &pib);    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
 
    printf("Nome do Estado: %s\nCódigo da Carta: %s\n", estado, codigo_da_carta);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nome_da_cidade, populacao);
    printf("Área em km²: %.2f\nPIB em R$: %.2f\nNúmero de pontos turísticos: %d\n\n", area_em_km2, pib, numero_de_pontos_turisticos);

    return 0;

}
