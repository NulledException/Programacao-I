#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, result;

    printf("Digite um lado do quadrado:");
    scanf("%f",&l);
    fflush(stdin);

    result=l*l;

    printf("A area do seu quadrado e de %.2f",result);

    getchar();
    return 0;
}
