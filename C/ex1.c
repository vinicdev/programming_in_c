#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Autor: Vinicius Cardoso
    Data: 14/09/2021
    Função: Receber nome e data de nascimento, verificar se a data e valida, por ultimo mostrar na tela
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 8B");

    //Declaração das variaveis
    char nome[20], sobrenome[20];
    int dia, mes, ano, divisao;

    printf("SEJA BEM-VINDO AO MOSTRADOR DE NOME E DATA DE NASCIMENTO\n\n");
    printf("Feito por: Vinicius Cardoso\n\n");
    system("pause");
    system("CLS");

    //Recebendo nome e sobre nome
    printf("Para iniciarmos, digite seu primeiro nome: %\n\n");
    printf(">");
    scanf("%s", &nome);
    system("CLS");
    printf("%s, preciso que informe o seu sobrenome:\n\n", nome);
    printf(">");
    scanf("%s", &sobrenome);
    system("CLS");

    //Recebendo data de nascimento
    printf("Agora informe sua data de nascimento (no formato dd/mm/aaaa):\n");
    printf("--> Coloque o primeiro valor dê um espaço e assim por diante\n\n");
    printf(">");
    scanf("%d%d%d", &dia, &mes, &ano);
    system("CLS");

    //Verificando se o dia e o ano sao validos
    if(ano > 2021){
        printf("ANO INVÁLIDO! TENTE NOVAMENTE");
        return 0;
    }else if(dia > 31){
        printf("DIA INVÁLIDO! TENTE NOVAMENTE");
        return 0;
    }

    //Verificando se o ano é bissexto
    divisao = ano % 4;

    if(divisao == 0){
        if(dia > 29){
            printf("DIA INVÁLIDO, ESTE MÊS TEM APENAS 29 DIAS NO ANO DE %d", ano);
            return 0;
        }
    } else {
     if (mes == 2) {
        if(dia > 28){
            printf("DIA INVÁLIDO, ESTE MÊS TEM APENAS 28 DIAS NO ANO DE %d", ano);
            return 0;
        }
     }
    }



    //Colando o mês por extenso
    switch(mes) {

        case 1:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Janeiro de %d \n\n", dia, ano);
        system("pause");
        break;

        case 2:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Fevereiro de %d \n\n", dia, ano);
        system("pause");
        break;

        case 3:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Março de %d \n\n", dia, ano);
        system("pause");
        break;

        case 4:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Abril de %d \n\n", dia, ano);
        system("pause");
        break;

        case 5:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Maio de %d \n\n", dia, ano);
        system("pause");
        break;

        case 6:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Junho de %d \n\n", dia, ano);
        system("pause");
        break;

        case 7:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Julho de %d \n\n", dia, ano);
        system("pause");
        break;

        case 8:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Agosto de %d \n\n", dia, ano);
        system("pause");
        break;

        case 9:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Setembro de %d \n\n", dia, ano);
        system("pause");
        break;

        case 10:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Outubro de %d \n\n", dia, ano);
        system("pause");
        break;

        case 11:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Novembro de %d \n\n", dia, ano);
        system("pause");
        break;

        case 12:
        printf("Seu nome é: %s %s\n", nome, sobrenome);
        printf("Você nasceu no dia %d de Dezembro de %d \n\n", dia, ano);
        system("pause");
        break;

        default :
        printf("Valor invalido!\n");
        printf("São aceitos valores de 1 a 12 como mês!\n");

    }
    return 0;
}
