#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s, mt, r, ht;

    printf("Insira o valor em segundos para converter: ");
    scanf("%d",&s);
    fflush(stdin);

    mt= s/60;
    ht= mt/60;
    r= mt % 60;

    printf("Resultado da conversão é de %dh e %dmin",ht ,r);
    return(1);
}
