#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v;

    printf("Digite um valor: ");
    scanf("%f",&v);
    fflush(stdin);

    if(v<=25.0 && v>=0){
        printf("Intervalo [0,25]");
    }
    else if(v>25.0 && v<=50){
        printf("Intervalo (25,50]");
    }
    else if(v>50.0 && v<=75){
        printf("Intervalo (50,75]");
    }
    else if(v>75.0 && v<=100){
        printf("Intervalo (75,100]");
    }
    else if(v>100.0 || v<0){
        printf("Fora de intervalo");
    }
    else{}

    return 0;
}
