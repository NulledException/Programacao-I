#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia um valor e escreva: �Par�, se o
valor for par e ��mpar�, se o valor for �mpar.
*/

int main()
{
    float n;
    int nn, resto;

    printf("Digite um numero: ");
    scanf("%f", &n);
    fflush(stdin);

    nn = n;

    resto = nn % 2;

    if (resto != 0)
    {
        printf("Impar");
    }
    else
    {
        printf("Par");
    }

    getchar();
    return 0;
}
