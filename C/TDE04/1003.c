#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, B, SOMA;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    fflush(stdin);

    printf("Digite o valor de B: ");
    scanf("%f", &B);
    fflush(stdin);

    SOMA = A + B;

    printf("SOMA = %.2f", SOMA);

    return 0;
}
