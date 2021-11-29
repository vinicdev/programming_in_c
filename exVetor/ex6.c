/*
    Nome: João Vinicius Cardoso da Silva
    Data 27/11/2021
    Função: Recebe 8 valores no vetor A, 5 no vetor B. Mostrar todos os valores em um vetor C.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[8], vetorB[5], vetorC[13];

    //Vetor A
    for(int contA = 0; contA < 8; contA ++) {
        printf("Informe vetorA: ");
        scanf("%d", &vetorA[contA]);
    }

    //Vetor B
    for(int contB = 0; contB < 5; contB ++) {
        printf("Informe vetorB: ");
        scanf("%d", &vetorB[contB]);
    }

    //Vetor C
    system("cls");
    for(int contC = 0; contC <8; contC++ ){
        vetorC[contC] = vetorA[contC];
        printf("VetorC[%d]: %d\n", contC, vetorC[contC]);
    }

    for(int contC = 0; contC < 5; contC++ ){
        vetorC[contC] = vetorB[contC];
        printf("VetorC[%d]: %d\n", contC, vetorC[contC]);
    }
}
