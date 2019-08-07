/*Faça um algoritmo que leia 10 valores quaisquer e armazene em um vetor. Após, os escreva na ordem contrária à que foram digitados. */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v[10], i;

    for(i=0; i<10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
        fflush(stdin);
    }

    for(i=9; i>=0; i--)
    {
        printf("%d\n",v[i]);
    }

    getchar();
    return 0;
}
