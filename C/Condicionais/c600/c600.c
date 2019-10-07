/*Faça um algoritmo que leia três notas de um aluno e escreva sua média harmônica. Se o aluno obteve média abaixo de 6.0, E SOMENTE NESSE CASO, leia uma quarta nota (da prova 
de recuperação) e substitua a menor das três notas pela nota da recuperação e recalcule a média harmônica. Escreva a média harmônica final e o conceito obtido (0, se média 
harmônica (MH) < 6.0; 1 se 6.0 <= MH<7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH < 9.0; 4 se MH>=9.0).*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float n1, n2, n3, nr, med;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    fflush(stdin);
    
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    fflush(stdin);

    if(n1<6 || n2<6 || n3<6){
        printf("Digite a nota de recuperacao: ");
        scanf("%f",&nr);
        fflush(stdin);
    }else{}

    if(nr>n1){
        n1=nr;
    }else if(nr>n2){
        n2=nr;
    }else if(nr>n3){
        n3=nr;
    }else{}

    med=((n1+n2+n3)/3);

    if(med<6){
        printf("0");
    }else if(med>=6 && med<7){
        printf("1");
    }else if(med>=7 && med<8){
        printf("2");
    }else if(med>=8 && med<9){
        printf("3");
    }else if(med>=9){
        printf("4");
    }else{}

    getchar();
    return 0;
}