#include <stdio.h>

int main(){
    int numero1, numero2;

    numero1 = 10;
    numero2 = 10;
    
    if(numero1 >= numero2){
        //bloco a ser executado se a condição for verdadeira
        printf("O número 1 é maior ou igual ao número 2\n");            
    }else{
        //bloco a ser executado se a condição for falsa
        printf("O número 2 é maior que o número 1\n\n");
    }

    printf("Fora IF\n");

}