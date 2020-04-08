/*Escrever um algoritmo que lê um vetor de inteiros maiores que zero para um vetor v(7). Conte, a seguir, quantos valores de v são primos e escreva esta informação. Além de 
contar, o algoritmo deve mostrar os primos. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[7], i, rest, primo[7], u, nprimo, count;

    for (i = 1; i <= 7; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    count = 0;

    for (i = 1; i <= 7; i++)
    {

        u = 0;

        while (rest != 0)
        {
            u++;
            rest = v[i] % u;
        }
        if (u == v[i])
        {
            count++;
            printf("%d e primo\n", v[i]);
        }
        else if (u != v[i])
        {
            nprimo = v[i];
        }
        else
        {
        }
    }
    printf("%d sao primos\n", count);
    getchar();
    return 0;
}