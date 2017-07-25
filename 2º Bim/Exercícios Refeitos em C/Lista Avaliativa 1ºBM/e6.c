//Lista avaliativa 1º Bim - Exercício 6

#include<stdio.h>

int main()
{
    int A, B, C;
    
    printf("Zerinho ou Um\n");
    printf("\nAlice: ");
    scanf("%d",&A);
    printf("Beto: ");
    scanf("%d",&B);
    printf("Clara: ");
    scanf("%d",&C);
    if((A>=0) & (A<=1) & (B>=0) & (B<=1) & (C>=0) & C<=1)
    {    
        if((A==B) & (B==C))     
        {
            printf("*\n");        
        }else
            if((A!=B) & (A!=C))
            {
                printf("A\n");
            }else
                if((B!=A) & (B!= C))
                {
                    printf("B\n");
                }else
                    if((C!=A) & (C!=B))
                    {
                        printf("C\n");
                    }
    }else
    {
        printf("Valores inválidos\n");
    }

    return 0;
}
