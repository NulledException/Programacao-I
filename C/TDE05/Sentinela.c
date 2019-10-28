/*Temos uma turma de alunos e precisamos verificar, para cada aluno, a média (aritmética) das notas que ele(a) obteve em três avaliações.  Para cada aluno, 
o usuário irá informar primeiro o número de matrícula dele e, logo em seguida, as três notas do aluno. Não sabemos a quantidade de alunos na turma, mas sabemos que,
quando os números de matrícula e notas de todos os alunos já tiverem sido informadas, o usuário irá entrar o valor 0 (zero) para o número de matrícula*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float med_aritmetica (float p1, float p2, float p3){
    float result;
    result=(p1+p2+p3)/3;
    return(result);
}

int main(){

    float p1, p2, p3, resultado;
    int mat; 

    while(mat!=0){

    printf("\nDigite 0 para parar execucao \nDigite o numero de matricula do aluno: ");
    scanf("%d",&mat);
    fflush(stdin);
    
    if(mat!=0){
    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f",&p1);
    fflush(stdin);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f",&p2);
    fflush(stdin);

    printf("Digite a nota da terceira avaliacao: ");
    scanf("%f",&p3);
    fflush(stdin);

    resultado=med_aritmetica(p1, p2, p3);

    printf("Numero de matricula do aluno: %d\n", mat);
    printf("Media aritmerica foi de: %.2f",resultado);
    }else{
        printf("Para usar, abra o programa novamente.");
    }
    }
    getchar();
}