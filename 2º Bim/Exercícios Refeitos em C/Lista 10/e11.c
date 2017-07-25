//Lista de Exercícios 10 - Exercício 11

#include <stdio.h>

int main ()
{
    char T1,T2;
    int GT1, GT2, GP;
   
    printf("Partida de futebol\n");
    printf("Time 1: ");
    scanf("%s",&T1); 
    printf("Time 2: ");
    scanf("%s",&T2);
    printf("Quantidade de gols marcados pelo Time 1: ");
    scanf("%d",&GT1);
    printf("Quantidade de gols marcados pelo Time 2: ");
    scanf("%d",&GT2);
    GP = GT1+GT2;
    printf("Total de gols marcados na partida: %d\n",GP);
    if(GT1 == GT2)
    {
        printf("EMPATE\n");      
    }
    else if (GT1 > GT2)
    {
        printf("O TIME 1 foi o VENCEDOR da partida\n"); 
    }
    else
    {
        printf("O TIME 2 foi o VENCEDOR da partida\n"); 
    }
    
    return 0;
}
