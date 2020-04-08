/*O fatorial de um número N (representado por N!) é o produto de todos os números de 1 a N. Assim, 4! = 1 x 2 x 3 x 4 = 24. Faça um algoritmo que leia um número N e escreva
 seu fatorial. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num, produto, i, ii;

    printf("Digite um numero: ");
    scanf("%d", &num);
    fflush(stdin);

    for (i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            produto = i * i++;
        }
        else
        {
            produto = produto * i;
        }
    }

    printf("%d", produto);

    getchar();
    return 0;
}