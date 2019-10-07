/*Faça um algoritmo que leia um valor n (n>=1) correspondente ao número de alunos de uma turma. Após, o algoritmo lê as notas das provas dos n alunos dessa turma. 
As notas deverão ser lidas até que sejam informadas n notas válidas, ou seja, no intervalo [0, 10], descartando as notas fora desse intervalo. 
As notas somente poderão ser lidas uma única vez. 
O algoritmo deve informar qual foi a menor nota e o percentual dos alunos que tiraram a menor nota (que não é, necessariamente, 0). 
Por exemplo, se o valor lido para n foi 20 e as notas foram 6.0 6.5 8.0 9.0 4.5 3.0 9.0 8.5 4.5 3.0 6.0 3.0 8.0 9.0 4.5 10 9.0 8.5 4.5 3.0 o algoritmo escreve 3.0 e 20, 
já que quatro (20% de 20) alunos tiraram essa nota.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int i, n[68], nalunos, menor, count;
    float percent;

    count=0;

    printf("Digite o numero de alunos: <68 ");
    scanf("%d",&nalunos);
    fflush(stdin);

    for(i=1; i<=nalunos; i++){

        printf("Digite a nota do aluno %d: ", i);
        scanf("%d",&n[i]);
        fflush(stdin);

        if(n[i]>10 || n[i]<0){
            printf("Nota invalida, tente novamente\n");
            i--;
        }else if(n[i]==menor){
            count++;
        }else if(n[i]<menor){
            menor=n[i];
        }else{}
        
        percent=(count*100)/nalunos;
    }

    printf("%.2f%%, %d", percent, menor);

    getchar();
    return 0;

}