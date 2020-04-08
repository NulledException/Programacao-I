/* Divisores de um número
I00000900 - Faça um algoritmo que leia um valor N, e escreva todos os seus divisores. */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{

    int n2, N, rest;

    printf("Digite um valor: ");
    scanf("%d", &N);
    fflush(stdin);

    n2 = N;

    while (n2 >= N && N >= 0)
    {
        rest = n2 % N;
        if (rest == 0)
            printf("%d\n", N);
        else
        {
        }
        N = N - 1;
    }

    getchar();
}