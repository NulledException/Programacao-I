<<<<<<< HEAD
/* Faça um algoritmo que leia, para duas barras de ouro, o seu peso e seu valor. O algoritmo deve ler também o limite de peso de uma mochila, e verificar e escrever que barra (s)
devem ir na mochila de modo a maximizar o valor dentro dela, sem exceder seu limite de peso. O algoritmo deve escrever as mensagens adequadas, como segue: 
o Nenhuma das barras puder ser colocada na mochila sem exceder o limite de peso 
o Apenas a barra 1 puder ir na mochila 
o Apenas a barra 2 puder ir na mochila 
o Ambas as barras puderem ir na mochila simultaneamente  */
=======
/* Faça um algoritmo que leia, para duas barras de ouro, o seu peso e seu valor. O algoritmo deve ler 
também o limite de peso de uma mochila, e verificar e escrever que barra (s) devem ir na mochila de modo a 
maximizar o valor dentro dela, sem exceder seu limite de peso. O algoritmo deve escrever as mensagens 
adequadas, como segue: 
o Nenhuma das barras puder ser colocada na mochila sem exceder o limite de peso 
o Apenas a barra 1 puder ir na mochila 
o Apenas a barra 2 puder ir na mochila 
o Ambas as barras puderem ir na mochila simultaneamente */

>>>>>>> 593ffbab68c9d7c54a02b522ba8bc7e3b8e5fd80
#include<stdio.h>
#include<stdlib.h>

int main()
{
<<<<<<< HEAD

    int pbarra1, pbarra2, vbarra1, vbarra2, limite, soma, pmenor;

    printf("Digite o peso da primera barra: ");
    scanf("%d", &pbarra1);
    fflush(stdin); 
    
    printf("Digite o peso da segunda barra: ");
    scanf("%d", &pbarra2);
    fflush(stdin);
    
    printf("Digite o valor da primera barra: ");
    scanf("%d", &vbarra1);
    fflush(stdin);
    
    printf("Digite o valor da segunda barra: ");
    scanf("%d", &vbarra2);
    fflush(stdin);
    
    printf("Digite o limite da mochila: ");
    scanf("%d", &limite);
    fflush(stdin);

    soma=pbarra1+pbarra2;

    if(pbarra1<=limite){
        pmenor=pbarra1;
        if(vbarra1>vbarra2){
            printf("Apenas a barra 1 pode ir na mochila.");
        }
    }else{}

    if(pbarra2<=limite){
        pmenor=pbarra2;
        if(vbarra2>vbarra1){
            printf("Apenas a barra 2 pode ir na mochila.");
        }else{}
    }else{}

    if(soma<=limite){
        printf("Ambas as barras podem ir na mochila simultaneamente.");
    }else if(pbarra1>limite && pbarra2>limite){
        printf("Nenhuma das barras pode ser colocada na mochila sem exceder o limite de peso");
    }else{}
    
    
=======
    float v1, v2, vmaior;
    int p1, p2, pm, menor;

    printf("Digite o peso da primeira barra de ouro: ");
    scanf("%d",&p1);
    fflush(stdin);

    printf("Digite o valor da primeira barra de ouro: ");
    scanf("%f",&v1);
    fflush(stdin);

    printf("Digite o peso da segunda barra de ouro: ");
    scanf("%d",&p2);
    fflush(stdin);

    printf("Digite o valor da segunda barra de ouro: ");
    scanf("%f",&v2);
    fflush(stdin);

    printf("Digite o limite de peso da mochila: ");
    scanf("%d",&pm);
    fflush(stdin);

    if(p1>p2)
    {
        menor=p2;
    }else{
        menor=p1;
    }
    if(v1>v2)
    {
        vmaior=v1;
    }else{
        vmaior=v2;
    }
    if(menor>=pm)
    {
        printf("Nenhuma das barras puder ser colocada na mochila sem exceder o limite de peso");
    }
    if(menor==p1 && menor<=pm){
        printf("Apenas a barra 1 puder ir na mochila");
    }else if(menor==p2 && menor<=pm){
        printf("Apenas a barra 2 puder ir na mochila");
    }else{}

>>>>>>> 593ffbab68c9d7c54a02b522ba8bc7e3b8e5fd80
    getchar();
    return 0;
}