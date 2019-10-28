#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, count;

    printf("Digite um numero: ");
    scanf("%d",&x);
    fflush(stdin);

    count=0;

    while (count<x){
        count++;
        printf(" %d", count);
    }
    getchar();

    return 0;
}