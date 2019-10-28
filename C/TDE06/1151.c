#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, v1, v2, v3;

    printf("Digite um numero inteiro: ");
    scanf("%d",&N);
    fflush(stdin);
    
    v1=0;
    v2=1;
    v3=0;

    while (v1>=0 && v1<N){

        if(v1==0){
            printf("%d 1 ", v1);
        }
        v1=v2+v3;
        v3=v2;
        v2=v1;
        if(v1<N){
            printf("%d ", v1);
        }
    }
    getchar();
    return 0;
}