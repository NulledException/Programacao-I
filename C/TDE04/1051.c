#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float s, oito, doito, voito;

    printf("Digite seu salario: ");
    scanf("%f",&s);
    fflush(stdin);

    if(s<=2000){
        printf("Isento");
    }else if (s>=2000.01 && s<=3000){
        oito=(s-2000)*8/100;
        printf("R$ %.2f", oito);
    }else if (s>=3000.01 && s<=4500){
        doito=(s-2000)*18/100;
        printf("R$ %.2f", doito);
    }else if (s>=4500.01){
        voito=(s-2000)*28/100;
        printf("R$ %.2f", voito);
    }else{}



    return 0;
}
