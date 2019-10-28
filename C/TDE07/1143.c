#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main()
{

    int n, i, q, c, count;

    printf("Digite um numero: ");
    scanf("%d", &n);
    fflush(stdin);

    count=0;

    for(i=1; i<=n; i++){
        count++;
        q= pow(count, 2);
        c= pow(count, 3);
        printf("%d %d %d\n", count, q, c);
    }

    getchar();
    return 0;

}