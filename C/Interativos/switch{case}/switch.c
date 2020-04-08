/*Escrever um algoritmo que lê um conjunto de três valores reais qualquer a, b, c. Após, leia uma variável inteira “opcao” que é a escolha do usuário para mostrar os valores 
conforme o indicado a seguir: 
o Se opcao = 1 mostrar os 3 valores a, b, c em ordem crescente. 
o Se opcao = 2 mostrar os 3 valores a, b, c em ordem decrescente. 
o Se opcao = 3 mostrar os 3 valores de forma que o maior valor fique entre os outros dois. */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, op, maior, menor, meio;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    fflush(stdin);

    printf("Digite o valor de b: ");
    scanf("%d", &b);
    fflush(stdin);

    printf("Digite o valor de c: ");
    scanf("%d", &c);
    fflush(stdin);

    if (a >= b && a >= c)
    {
        maior = a;
    }
    else if (b >= c && b >= a)
    {
        maior = b;
    }
    else if (c >= b && c >= a)
    {
        maior = c;
    }
    else
    {
    }
    if (a <= b && a <= c)
    {
        menor = a;
    }
    else if (b <= c && b <= a)
    {
        menor = b;
    }
    else if (c <= b && c <= a)
    {
        menor = c;
    }
    else
    {
    }

    meio = a + b + c - menor - maior;

    printf("Digite:\n1: Para mostrar em ordem Crescente\n2: Para mostrar em ordem Decrescente\n3: Para mostrar o maior valor no centro\n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op)
    {
    case 1:
        printf("%d\n%d\n%d", menor, meio, maior);
        break;
    case 2:
        printf("%d\n%d\n%d", maior, meio, menor);
        break;
    case 3:
        printf("%d\n%d\n%d", menor, maior, meio);
        break;
    default:
        printf("Opcao invalida.");
    }

    getchar();
    return 0;
}