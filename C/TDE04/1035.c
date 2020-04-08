#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("Digite o primeiro valor: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("Digite o primeiro valor: ");
    scanf("%f", &c);
    fflush(stdin);

    printf("Digite o primeiro valor: ");
    scanf("%f", &d);
    fflush(stdin);

    if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0)
    {
        printf("Valores aceitos");
    }
    else
    {
        printf("Valores nao aceitos");
    }

    return 0;
}
