#include <stdlib.h>
#include <stdio.h>

int main()

{
    int idade, count, aux, soma;
    float media, fcount;

    count = 0;
    aux = 0;
    while (idade > 0)
    {

        printf("\nDigite um numero negativo para mostrar a media.\nDigite a idade do individuo: ");
        scanf("%d", &idade);
        fflush(stdin);

        if (idade > 0)
        {
            count = count + 1;
            soma = aux + idade;
            aux = soma;
        }
        else
        {
            fcount = count;
            media = soma / fcount;
            printf("%.2f", media);
        }
    }
    getchar();
    return 0;
}