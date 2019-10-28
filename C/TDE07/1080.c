#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    int num[100], i, pos, aux;
    

    for(i=1; i<=100; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
        fflush(stdin);

        if(num[i]>=aux)
        {
            aux=num[i];
            pos=i;
        }
    }
    printf("%d\n%d", aux, pos);

    getchar();
    return 0;
}