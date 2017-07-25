//Lista avaliativa 1º Bim - Exercício 2

#include <stdio.h>

int main()
{
    int C, P, F;
    
    printf("Campeonato de aviões de papel\n");
    printf("Competidores: ");
    scanf("%d",&C);
    printf("Quantidade de folhas que cada competidor deve receber: ");
    scanf("%d",&F);
    printf("Folhas de papel compradas: ");
    scanf("%d",&P);
    if((C>=1) & (C<=1000) & (P>=1) & (P<=1000) & (F>=1) & (F<=1000))
    {
        if(C*F<=P)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else
    {
        printf("Valores inválidos\n");
    }
}
