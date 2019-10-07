/*Faça um algoritmo que escreva todos os números entre 1 e 200 que são múltiplos de 11. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, rest;

    i=1;

    while(i<200){
        rest=i % 11;
        if(rest==0){
            printf("%d\n",i);
        }
        i++;
    }
    getchar();
    return 0;
}