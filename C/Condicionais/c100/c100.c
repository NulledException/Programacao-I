#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia 3 valores v1, v2 e v3, e escreva-os
em ordem crescente.
*/

int main()
{
    float v1, v2, v3, maior, menor, meio;

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    fflush(stdin);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    fflush(stdin);

    printf("Digite o terceiro valor: ");
    scanf("%f", &v3);
    fflush(stdin);

    if(v1>v2 && v1>v3){
        maior=v1;
    }else if(v2>v3 && v2>v1){
        maior=v2;
    }else if (v3>v2 && v3>v1){
        maior=v3;
    }else{}

    if(v1<v2 && v1<v3){
        menor=v1;
    }else if(v2<v3 && v2<v1){
        menor=v2;
    }else if (v3<v2 && v3<v1){
        menor=v3;
    }else{}

    meio=(v1+v2+v3)-(maior+menor);

    printf("%.2f, %.2f, %.2f",menor, meio, maior);

    getchar();
    return 0;
}
