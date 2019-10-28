/*Exercício usando contadores:
I00000700 - Faça um algoritmo que leia 30 valores e conte quantos estão em cada um dos intervalos [0,25],(25,50], (50,75], (75..100], escrevendo ao final essa informação. 
Obs.: nesta representação de intervalos, um número ao lado de colchetes faz parte do intervalo. Números ao lado de parênteses não fazem parte do intervalo. 
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int count, count1, count2, count3, count4, n;

    count=0;
    count1=0;
    count2=0;
    count3=0;
    count4=0;

    while (count<30)
    {
        printf("Digite um numero: ");
        scanf("%d",&n);
        fflush(stdin);

        count=count + 1;

        if(n>=0 && n<=25){
            count1=count1 + 1;
            }else{}
        if(n>25 && n<=50){
            count2=count2 + 1;
            }else{}
        if(n>50 && n<=75){
            count3=count3 + 1;
            }else{}
        if (n>75 && n<=100){
            count4=count4 + 1;
            }else{}
        if (n<=0 || n>100){
            printf("Numero invalido, tente novamente. \n");
            count=count-1;
            }else{}
            
    }

    printf("(0,25]: %d \n", count1);
    printf("(25,50: %d \n", count2);
    printf("(50,75]: %d \n", count3);
    printf("(75,100]: %d \n", count4);

    getchar();

    return 0;
}
