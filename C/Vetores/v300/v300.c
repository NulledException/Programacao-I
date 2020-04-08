/*Faça um algoritmo que leia 9 valores inteiros maiores que zero para um vetor v e escreva primeiramente todos os números pares digitados e em seguida os números ímpares. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[9], i, resto;

    for (i = 1; i <= 9; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }
    for (i = 1; i <= 9; i++)
    {

        resto = v[i] % 2;

        if (resto == 0)
        {
            printf("%d\n", v[i]);
        }
    }
    for (i = 1; i <= 9; i++)
    {

        resto = v[i] % 2;

        if (resto != 0)
        {
            printf("%d\n", v[i]);
        }
    }

    getchar();
    return 0;
}