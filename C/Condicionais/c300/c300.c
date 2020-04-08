/*Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação de segundo grau, e verifique se a equação tem raízes reais. Se a equação tiver raízes reais, calcule
 e escreva as raízes da equação (em ordem crescente). Se não tiver, escreva "A equação não possui raízes reais". Dica: As raízes de uma equação podem ser calculadas pela fórmula
 de Baskhara. Uma equação não possui raízes se reais se b2-4ac < 0*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, baoq, delta, raiz, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("Digite o valor de b: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("Digite o valor de c: ");
    scanf("%f", &c);
    fflush(stdin);

    baoq = pow(b, 2);
    delta = (baoq) - (4 * (a * c));
    raiz = sqrt(delta);

    if (delta < 0)
    {
        printf("A equação nao possui raizes reais");
    }
    else
    {
        x1 = (-b + raiz) / (2 * a);
        x2 = (-b - raiz) / (2 * a);

        printf("x'=%.2f\nx''=%.2f", x1, x2);
    }
    getchar();
    return 0;
}