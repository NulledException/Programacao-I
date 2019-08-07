#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia dois valores e, atrav�s de uma
compara��o, escreva o maior deles. Considere que os dois valores s�o
diferentes.
*/

int main()
{
    float v1, v2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    fflush(stdin);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    fflush(stdin);

    if(v1>v2){
        printf("%.2f", v1);
    }else{
        printf("%.2f", v2);
    }

    getchar();
    return 0;
}
