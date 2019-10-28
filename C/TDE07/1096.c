#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;

    for(i=1; i<=3; i++){
        printf("I=1 J=7\nI=1 J=6\nI=1 J=5\n");
        for(i=3; i>=3 && i<=6; i++){
            printf("I=3 J=7\nI=3 J=6\nI=3 J=5\n");
            for(i=6; i>=6 && i<=9; i++){
                printf("I=5 J=7\nI=5 J=6\nI=5 J=5\n");
                for(i=9; i>=9 && i<=12; i++){
                    printf("I=7 J=7\nI=7 J=6\nI=7 J=5\n");
                    for(i=12; i==12; i++){
                        printf("I=9 J=7\nI=9 J=6\nI=9 J=5\n");
                    }
                }
            }
        }
    }

    getchar();
    return 0;
}