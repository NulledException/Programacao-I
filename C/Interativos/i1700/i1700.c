/*Faça um algoritmo que leia, para 10 pessoas, seu peso e altura e escreva o peso e a altura da pessoa mais alta*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, altura, maior, peso, mpeso;

    maior = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite seu peso em kilogramas: ");
        scanf("%d", &peso);
        fflush(stdin);

        printf("Digite sua altura em centimetros: ");
        scanf("%d", &altura);
        fflush(stdin);

        if (maior <= altura)
        {
            maior = altura;
            mpeso = peso;
        }
        else
        {
        }
    }

    printf("%dg, %dcm", mpeso, maior);

    getchar();
    return 0;
}