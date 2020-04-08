#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, count, rest;

    printf("Digite um numero: ");
    scanf("%d", &num);
    fflush(stdin);

    for (count = 1; count <= num; count++)
    {
        rest = num % count;
        if (rest == 0)
        {
            printf("%d\n", count);
        }
        else
        {
        }
    }

    getchar();
    return 0;
}