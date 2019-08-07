#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, soma, deltaq, delta;

    printf("Digite o valor de a: ");
    scanf("%f",&a);
    fflush(stdin);

    printf("Digite o valor de b: ");
    scanf("%f",&b);
    fflush(stdin);

    printf("Digite o valor de c: ");
    scanf("%f",&c);
    fflush(stdin);

    delta=(b*b)-(4*(a*c));
    deltaq=sqrt(delta);

    x1=(-b+deltaq)/(2*a);
    x2=(-b-deltaq)/(2*a);

    soma=x1+x2;

    printf("A soma das raizes e de %.2f",soma);

    getchar();
    return 0;
}
