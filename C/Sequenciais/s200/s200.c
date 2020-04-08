#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, h, result;

    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("Digite o tamanho da altura do triangulo: ");
    scanf("%f", &h);
    fflush(stdin);

    result = (b * h) / 2;

    printf("A area do seu triangulo e de %.2f", result);

    getchar();
    return 0;
}
