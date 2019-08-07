#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia os valores das quatro provas de
um aluno e escreva a m�dia aritm�tica considerando apenas as tr�s
melhores notas. Por exemplo, se o valores lidos foram 9, 9.5, 7, e 8, a m�dia
ser� (9 + 9.5 + 8)/3 (a prova de nota 7 � descartada). Dica: N�o esque�a de
considerar a possibilidade de ocorrerem notas iguais.
*/
int main()
{
    float p1, p2, p3, p4, menor, med;

    printf("Digite a nota da primeira prova: ");
    scanf("%f",&p1);
    fflush(stdin);

    printf("Digite a nota da segunda prova: ");
    scanf("%f",&p2);
    fflush(stdin);

    printf("Digite a nota da terceira prova: ");
    scanf("%f",&p3);
    fflush(stdin);

    printf("Digite a nota da quarta prova: ");
    scanf("%f",&p4);
    fflush(stdin);

    if(p1<=p2 && p1<=p3 && p1<=p4){
        menor=p1;
    }else if(p2<=p1 && p2<=p3 && p2<=p4){
        menor=p2;
    }else if(p3<=p1 && p3<=p2 && p3<=p4){
        menor=p3;
    }else if(p4<=p1 && p4<=p2 && p4<=p3){
        menor=p4;
    }else{}

    med=(p1+p2+p3+p4-menor)/3;
    printf("%.2f", med);

    getchar();
    return 0;
}
