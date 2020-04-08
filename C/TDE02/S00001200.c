#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int hinicial, minicial, hfinal, mfinal, minicialt, mfinalt, vartempo, minxh, rmin;
    printf("Digite somente a hora inicial do evento: ");
    scanf("%d", &hinicial);
    fflush(stdin);

    printf("Digite somente os minutos iniciais do seu evento: ");
    scanf("%d", &minicial);
    fflush(stdin);

    printf("Digite somente a hora final do evento: ");
    scanf("%d", &hfinal);
    fflush(stdin);

    printf("Digite somente os minutos finais do seu evento: ");
    scanf("%d", &mfinal);
    fflush(stdin);

    minicialt = (hinicial * 60) + minicial;
    mfinalt = (hfinal * 60) + mfinal;
    vartempo = mfinalt - minicialt;
    minxh = vartempo / 60;
    rmin = vartempo % 60;

    printf("O seu evento durou %dhr e %dmin", minxh, rmin);
    return (1);
}
