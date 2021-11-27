/*
    Nome: João Vinicius Cardoso da Silva
    Data 27/11/2021
    Função: Recebe 2 valores em vetores diferentes e faça a multiplicação deles por 3.

    2. Elaborar um programa em C que leia 8 números inteiros
    em um Vetor A. Construir um Vetor B de mesmo
    tamanho que A onde os valores dos elementos serão os
    do Vetor A multiplicados por 3 ( B[x] = A[x] * 3 ). Exiba
    os valores dos elementos de B.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int vetorA[8], vetorB[8];

    for(int cont = 0; cont < 8; cont++) {
        printf("Informe  vetorA: ");
        scanf("%d", &vetorA[cont]);
    }
    system("clear");
    for(int cont = 0; cont < 8; cont++) {
        vetorB[cont] = vetorA[cont] * 3;
        printf("Valor do vetorB[%d]: %d\n", cont, vetorB[cont]);
    }
}
