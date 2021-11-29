/*
    Nome: João Vinicius Cardoso da Silva
    Data 29/11/2021
    Função: Receber um vetor A e declarar um Vetor B, onde o valor de A passará para B, só que B será o inverso.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int vetorA[10], vetorB[10];

    for(int cont = 0; cont < 10; cont++){
        printf("Informe um valor: ");
        scanf("%d", &vetorA[cont]);
        vetorB[cont] = vetorA[cont];
    }
    system("cls");

    //Vetor A
    printf("VetorA\n");

    for(int contA = 0; contA < 10; contA++) {
        printf("VetorA[%d]: %d\n", contA, vetorA[contA]);
    }

    //Vetor B
    printf("\n\nVetorB\n");

    for(int contB = 9; contB > -1; contB--) {
        printf("ValorB[%d]: %d\n", contB, vetorB[contB]);
    }
}
