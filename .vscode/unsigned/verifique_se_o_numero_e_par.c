#include <stdio.h>

int main (){

    int numero = 14, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if (resultado == 0) {
        printf("O número é par!\n\n");
    }else{
        printf("O número é impar!\n\n");


    }



}