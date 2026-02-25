#include <stdio.h>

int main (){
    int idade;
    float altura;
    char opcao[4];
    char nome[20];

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digita a sua altura:");
    scanf("%f", &altura);
    printf("A altura é: %f\n\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite a opcao: ");
    scanf("%s", &opcao);
    printf("A opcao é: %3s\n\n", opcao);

    return 0;


}



