#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
         float v1, v2, mv, x;
         
         printf("Digite o primeiro valor: ");
         scanf("%f",&v1);
         //fflush(stdin);
         
         printf("Digite o segundo valor: ");
         scanf("%f",&v2);
         //fflush(stdin);
        
         x=fabs(v1-v2);
         mv=(v1+v2+x)/2;

         printf("O maior valor entre %f e %f é:\n%f",v1, v2, mv);
}

