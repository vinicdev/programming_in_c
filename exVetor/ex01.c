/*
    Nome: João Vinicius Cardoso da Silva
    Data 27/11/2021
    Função: Recebe uma função que receba 10 elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int vetor[10];

    for(int cont = 0; cont < 10; cont++) {
        printf("Informe um número: ");
        scanf("%d", &vetor[cont]);
    }
    system("clear");
    for(int cont = 0; cont <10; cont++) {
        printf("Valor[%d]: %d\n", cont, vetor[cont]);
    }
}


