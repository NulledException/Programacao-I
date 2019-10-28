#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
         float n1, n2, n3, m1, m2;
         
         printf("Digite sua primeira nota: ");
         scanf("%f",&n1);
         //fflush(stdin);

         printf("Digite sua segunda nota: ");
         scanf("%f",&n2);
         //fflush(stdin);

         printf("Digite sua terceiraa nota: ");
         scanf("%f",&n3);
         //fflush(stdin);
         
         m1=(1/n1)+(2/n2)+(3/n3);
         m2=6/m1;

         printf("A sua média Harmônica ponderada desse semestre foi: %.2f",m2);
}


