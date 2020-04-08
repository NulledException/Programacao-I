#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vreais;
    int cem, cinquenta, vinte, dez, cinco, dois, um, total;

    printf("Digite seu valor em reais: ");
    scanf("%f", &vreais);
    fflush(stdin);

    total = (int)vreais;

    cem = total / 100;
    total = total - (cem * 100);

    cinquenta = total / 50;
    total = total - (cinquenta * 50);

    vinte = total / 20;
    total = total - (vinte * 20);

    dez = total / 10;
    total = total - (dez * 10);

    cinco = total / 5;
    total = total - (cinco * 5);

    dois = total / 2;
    total = total - (dois * 2);

    um = total / 1;
    total = total - (um * 1);

    printf("O menor valor possivel de notas para o valor ser decomposto � de:\n");
    printf("%d nota de R$100,00\n", cem);
    printf("%d nota de R$50,00\n", cinquenta);
    printf("%d nota de R$20,00\n", vinte);
    printf("%d nota de R$10,00\n", dez);
    printf("%d nota de R$5,00\n", cinco);
    printf("%d nota de R$1,00\n", um);

    return (1);
}
