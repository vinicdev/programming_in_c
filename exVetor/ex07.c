/*
    Nome: João Vinicius Cardoso da Silva
    Data 27/11/2021
    Função: Recebe 10 valores no vetor A, em seguida o usario digita um valor para verificar se esta no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[10], valor, cont, posicao, dedoDuro = 0;

    for(cont = 0; cont < 10; cont ++) {
        printf("Informe vetorA: ");
        scanf("%d", &vetorA[cont]);
    }

    system("cls");

    printf("Informe o valor desejado: ");
    scanf("%d", &valor);

    system("cls");

    for(cont = 0; cont < 10; cont ++) {
        if(vetorA[cont] == valor) {
            dedoDuro = 1;
            posicao = cont;
        }
    }

    if(dedoDuro == 0) {
        printf("Valor Escolhido: %d\n\n", valor);
        printf("O numero NAO esta cadastrado no vetor.\n\n");
    } else {
        printf("Valor Escolhido: %d\n\n", valor);
        printf("O numero esta cadastrado no vetor.\n");
        printf("Posicao: vetor[%d]\n\n", posicao);
    }
}
