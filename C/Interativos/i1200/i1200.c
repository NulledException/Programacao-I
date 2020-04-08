/* Um número inteiro maior do que 1 é primo se ele possui como divisores somente o 1 e ele mesmo. Faça um algoritmo que leia um número (teste a validade da leitura para que 
seja maior que 1) e verifique se é primo escrevendo: 1 - o número é primo ou 0 - o número não é primo. Dica: Podese também verificar se um número é primo encontrando seu 
primeiro divisor maior que 1. Se o primeiro divisor for o próprio número, ele é primo.  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, primo, num, rest, d1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        fflush(stdin);
    } while (num <= 1);

    rest = 1;

    i = 1;

    while (rest != 0)
    {
        i++;
        rest = num % i;
    }

    if (i == num)
    {
        printf("1 - o numero e primo");
    }
    else if (i != num)
    {
        printf("0 - o numero nao e primo");
    }
    else
    {
    }

    getchar();
    return 0;
}