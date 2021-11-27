/*
    Nome: João Vinicius Cardoso da Silva
    Data 27/11/2021
    Função: Criar um vetor que receba 12 elementos, os números que forem impar serão multiplicados por 2.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int vetorX[12], vetorZ[12], div, multi;

    for(int cont = 0; cont < 12; cont++) {
        printf("Informe um número: ");
        scanf("%d", &vetorX[cont]);
    }
    system("clear");
    for(int cont = 0; cont < 12; cont++) {
        div = vetorX[cont] % 2;
        if(div == 0){
            vetorZ[cont] = vetorX[cont] * 2;
            printf("Valor[%d]: %d\n", cont, vetorZ[cont]);

        } else {
            vetorZ[cont] = vetorX[cont];
            printf("Valor[%d]: %d\n", cont, vetorZ[cont]);
        }
    }
}