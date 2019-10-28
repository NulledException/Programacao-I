#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l1, l2, l3, s, x, area;

    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%f",&l1);
    fflush(stdin);

    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%f",&l2);
    fflush(stdin);
    
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%f",&l3);
    fflush(stdin);

    s=((l1+l2+l3)/(2));

    x=(s*(s-l1)*(s-l2)*(s-l3));

    area=sqrt(x);

    printf("A area do seu triangulo e de %.2f", area);

    getchar();
    return 0;
}
