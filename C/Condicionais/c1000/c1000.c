/*Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule quanto ele ganhou
 pelo turno. Considere que ele entra e sai no mesmo dia, e que as horas a partir das 20:00 valem 20% a mais (adicional noturno) */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vh, calc, nvh, valorextra;
    int he, hs, dif, she, shs, hextra;

    printf("Digite o valor ganho por hora: ");
    scanf("%f", &vh);
    fflush(stdin);

    printf("Digite a hora de entrada: ");
    scanf("%d", &he);
    fflush(stdin);

    printf("Digite a hora de saida: ");
    scanf("%d", &hs);
    fflush(stdin);

    she = (he * 60) * 60;
    shs = (hs * 60) * 60;

    if (hs <= 20)
    {
        dif = shs - she;
        dif = (dif / 60) / 60;
        calc = dif * vh;
        printf("voce recebeu R$ %.2f pelo turno.", calc);
    }
    else
    {
    }

    if (hs > 20)
    {
        dif = shs - she;
        hextra = shs - 72000;
        hextra = (hextra / 60) / 60;
        nvh = vh * 0.2;
        valorextra = nvh * hextra;
        dif = (dif / 60) / 60;
        calc = (dif * vh) + valorextra;
        printf("voce recebeu R$ %.2f pelo turno", calc);
    }
    else
    {
    }

    getchar();
    return 0;
}