#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nvsa, sat, raj, per, nv;
    int p;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f",&sat);

    per=sat;

    if(sat>0.00 && sat<=400.00){
        nvsa=sat*15/100;
        nv=sat+nvsa;
        p=15;
    }else if(sat>=400.01 && sat<=800.00){
        nvsa=sat*12/100;
        nv=sat+nvsa;
        p=12;
    }else if(sat>=800.01 && sat<=1200.00){
        nvsa=sat*10/100;
        nv=sat+nvsa;
        p=10;
    }else if(sat>=1200.01 && sat<=2000.00){
        nvsa=sat*7/100;
        nv=sat+nvsa;
        p=7;
    }else if(sat>=2000.01){
        nvsa=sat*4/100;
        nv=sat+nvsa;
        p=4;
    }else{}

        raj=nv-sat;

    printf("Novo salario: %.2f \nReajuste Ganho: %.2f \nEm percentual: %d %%", nv, raj, p);

    return 0;
}
