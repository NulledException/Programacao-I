/*Fazer um programa que, dado um nome completo, informe a abreviatura deste nome. Não se devem abreviar as preposições como: do, de, etc. A abreviatura deve vir separada por
 pontos. Ex: Paulo Jose de Alma Prado. Abreviatura: P.J.A.P. */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{   

    char nomec[100], maiuscula[100];

    printf("Digite seu nome completo: ");
    gets(nomec);

    int i;

    for(i=0; i<=strlen(nomec); i++){
        if (isupper(nomec[i])){
            maiuscula[i]=nomec[i];
            printf("%c.",maiuscula[i]);
        }else{}
    }
    
    getchar();
    return 0;

}