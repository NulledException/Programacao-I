/*Faça um algoritmo que leia a data de nascimento de uma pessoa e a data atual (cada data com dia, mês e ano). O algoritmo deve escrever 1 se a pessoa é maior de idade, e 0 se 
ela é menor de idade (maioridade: 18 anos). 
• */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int idade, dia, mes, ano, dif;

    printf("Digite o dia que voce nasceu: ");
    scanf("%d",&dia);
    fflush(stdin);
    
    printf("Digite o mes que voce nasceu: ");
    scanf("%d",&mes);
    fflush(stdin);
    
    printf("Digite o ano que voce nasceu: ");
    scanf("%d",&ano);
    fflush(stdin);

    dif=2019-ano;

    if(dif>18){
        printf("1");
    }else if(dif==18 && mes<7){
        printf("1");
    }else if(dif==18 && mes==7 && dia<=4){
        printf("1");
    }else{}

    if(dif<18){
        printf("0");
    }else if(dif==18 && mes>7){
        printf("0");
    }else if(dif==18 && mes==7 && dia>4){
        printf("0");
    }else{}

    getchar();
    return 0;
}