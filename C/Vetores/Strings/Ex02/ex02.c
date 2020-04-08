/*Criar um programa que leia um string aluno1. Após, declare um string aluno2 e jogue o conteúdo de aluno1 em aluno2. Após, converta cada caracter de aluno1 para maiúsculo, 
mostrando os dois strings ao final.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char aluno1[50];

    printf("Digite o nome do aluno: ");
    gets(aluno1);

    char aluno2[50];

    int j;

    for (j = 0; j <= strlen(aluno1); j++)
    {

        aluno2[j] = aluno1[j];
    }

    int i;

    for (i = 0; i <= strlen(aluno1); i++)
    {

        aluno1[i] = toupper(aluno1[i]);
    }
    printf("aluno1=%s\naluno2=%s\n", aluno1, aluno2);

    getchar();
    return 0;
}