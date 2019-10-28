#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int n, x, y, count, count1, rest, impar, aux, soma;

    printf("Digite a quantidade de testes para serem feitos: ");
    scanf("%d", &n);
    fflush(stdin);

    for(count=1; count<=n; count++){
        printf("Digite o valor para comecar a contagem: ");
        scanf("%d", &x);
        fflush(stdin);

        printf("Digite a quantidade de somas para serem feitas: ");
        scanf("%d", &y);
        fflush(stdin);

        rest= x % 2;

        if(rest != 0){
            impar=x;
        }else{
            x++;
            impar=x;
        }
        for(count1=1; count1<y; count1++){   
            aux=impar;
            impar= aux + 2;
            if(count1 == 1){
                soma= impar+aux;
            }else{
                soma=soma+impar;
            }
        }
        printf("%d\n",soma);
    }

    getchar();
    return 0;
}