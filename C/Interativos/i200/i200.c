/*Faça um algoritmo que escreva todos os números pares entre 1 e 50. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, rest;

    i=1;

    while(i<50){
        rest=i % 2;
        if(rest==0){
            printf("%d\n",i);
        }
        i++;
    }
    getchar();
    return 0;
}