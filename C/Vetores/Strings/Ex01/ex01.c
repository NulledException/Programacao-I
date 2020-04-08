/* Fazer um programa que, dadas 2 palavras, determine:
Se as palavras são iguais.
Se as palavras são iguais, independente de caixa de texto.
Caso as palavras sejam diferentes (tanto no a. quanto no b.), qual delas tem maior comprimento.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[47], string2[47];
    int retorno1, retorno2;

    printf("Digite a primeira palavra: ");
    gets(string1);

    printf("Digite a segunda palavra: ");
    gets(string2);

    retorno1 = strcmp(string1, string2);
    retorno2 = stricmp(string1, string2);

    if (retorno1 == 0)
    {
        printf("As palavras sao iguais.\n");
    }
    else if (retorno2 == 0)
    {
        printf("As palavras sao iguais, independente de caixa de texto.\n");
    }
    else if (strlen(string2) < strlen(string1))
    {
        printf("%s e menor que %s\n", string2, string1);
    }
    else if (strlen(string1) < strlen(string2))
    {
        printf("%s e menor que %s\n", string1, string2);
    }
    else
    {
    }

    getchar();
    return 0;
}