#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, x;

    printf("Digite um valor: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("Digite outro valor: ");
    scanf("%f", &b);
    fflush(stdin);

    x = a + b;

    printf("X = %.2f\n", x);

    return 0;
}
