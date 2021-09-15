#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Autor: Vinicius Cardoso
    Data: 14/09/2021
    Função: verificar se o ano e bissexto
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int ano;
    float div;

    printf("Informe o ano:");
    scanf("%d", &ano);
    div = ano % 4;

    if(div == 0){
        printf("Ano de %d é bissexto!", ano);
        system("pause");
    }else{
        printf("Ano de %d não é bissexto!", ano);
        system("pause");
    }
}
