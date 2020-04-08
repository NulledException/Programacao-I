/* Faça um algoritmo que escreva os números em ordem decrescente, de 20 a 1. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;

    i = 20;

    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }

    getchar();
    return 0;
}