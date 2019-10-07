/*As tarifas de um estacionamento são definidas assim: A primeira e a segunda hora custam 5 reais cada. A terceira e a quarta hora custam 2 reais cada. A partir da quinta 
hora, cada hora custa 1 real cada. Assim, se um carro ficar 5 horas no estacionamento, o motorista pagará 15 reais (5+5+2+2+1). Faça um algoritmo que leia dois valores He e Hs, 
respectivamente a hora de entrada e saída no estacionamento (horas inteiras, sem minutos), e escreva o valor a ser pago. Considere que o usuário deve retirar seu carro antes da 
meia-noite, ou seja, ele não pode entrar em um dia e sair no dia seguinte. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int He, Hs, dif, calc, soma;
    
    printf("Digite a hora de entrada: ");
    scanf("%d",&He);
    fflush(stdin);

    printf("Digite a hora de saida: ");
    scanf("%d",&Hs);
    fflush(stdin);
    
    dif=Hs-He;

    if(dif==1){
        printf("5 reais");
    }else if(dif==2){
        printf("10 reais");
    }else if(dif==3){
        printf("12 reais");
    }else if(dif==4){
        printf("14 reais");
    }else if(dif>=5){
        calc=dif-4;
        soma=calc+14;
        printf("%d reais", soma);
    }else{}


    getchar();
    return 0;
}