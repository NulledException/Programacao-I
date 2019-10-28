#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f",&x);
    fflush(stdin);

    printf("Digite o valor de y: ");
    scanf("%f",&y);
    fflush(stdin);

    if(x==0 && y==0){
        printf("Origem");
    }else if (x>0 && y>0){
        printf("Q1");
    }else if(x<0 && y>0){
        printf("Q2");
    }else if(x<0 && y<0){
        printf("Q3");
    }else if(x>0 && y<0){
        printf("Q4");
    }else{}

    return 0;
}
