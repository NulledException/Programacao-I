/*Faça um algoritmo que leia 3 valores a, b e c, lados de um triângulo, e verifique o tipo de triângulo formado escrevendo: “Equlátero” - se o triângulo é equilátero (os três
lados são iguais); “Isóceles” - se o triângulo é isósceles (dois lados iguais e um diferente); “Escaleno” - escaleno (3 lados diferentes).*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float v1, v2, v3;

    printf("Digite o valor do lado a: ");
    scanf("%f",&v1);
    fflush(stdin);

    printf("Digite o valor do lado b: ");
    scanf("%f",&v2);
    fflush(stdin);
    
    printf("Digite o valor do lado c: ");
    scanf("%f",&v3);
    fflush(stdin);
    
    if(v1<0 || v2<0 || v3<0){
        printf("Numero invalido");
    }else if (v1==v2 && v2==v3){
        printf("Equilatero");
    }else if(v1!=v2 && v2!=v3){
        printf("Escaleno");
    }else{
        printf("Isoceles");
    }

    getchar();
    return 0;
}