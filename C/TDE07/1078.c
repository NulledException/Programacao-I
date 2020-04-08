#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n[11], i, num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    fflush(stdin);

    for (i = 1; i <= 10; i++)
    {
        n[i] = i * num;
        printf("%d x %d = %d\n", i, num, n[i]);
    }
    getchar();
    return 0;
}