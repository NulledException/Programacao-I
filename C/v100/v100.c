/*Escrever um algoritmo que lê um vetor v(8). Conte, a seguir, quantos valores de V são negativos e escreva esta informação.  */
#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int v[8], n, i;

    n=0;

    for(i=0; i<8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
        fflush(stdin);

        if (v[i]<0){
            n=n+1;
        }
    }
    printf("%d são negativos", n);

    getchar();
    return 0;

}