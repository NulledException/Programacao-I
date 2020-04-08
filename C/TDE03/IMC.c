#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altxm, altcm, pesokg, imc;

    printf("Digite a sua altura em cm: ");
    scanf("%f", &altcm);

    printf("Digite seu peso atual em kg: ");
    scanf("%f", &pesokg);

    altxm = altcm / 100;

    imc = pesokg / (altxm * altxm);

    if (imc < 18.5)
    {
        printf("Voc� esta abaixo do peso ideal.");
    }
    if (imc > 18.5 && imc < 24.9)
    {
        printf("Voc� esta com o peso ideal.");
    }
    if (imc > 25 && imc < 29.9)
    {
        printf("Voc� esta acima do peso ideal.");
    }
    if (imc > 30 && imc < 34.9)
    {
        printf("Voc� esta com obesidade de grau 1.");
    }
    if (imc > 35 && imc < 39.9)
    {
        printf("Voc� esta com obesidade de grau 2.");
    }
    if (imc > 40)
    {
        printf("Voc� esta com obesidade de grau 3.");
    }
    return 0;
}
