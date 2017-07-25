//Lista de Exercícios 10 - Exercício 10

#include <stdio.h>

int main ()
{
    int he, hf, H; 

    printf("Gratificação de Natal\n");
    printf("Número de horas extras: ");
    scanf("%d",&he);
    printf("Número de horas falta: ");
    scanf("%d",&hf);
    H = he - 2.0/3.0*hf;
    printf("Horas: %d\n",H);

    if (H >= 2400)
    {
        printf("Gratificação: R$500,00\n");    
    }    
    else if ((H >= 1800) & (H < 2400))
    {
        printf("Gratificação: R$400,00\n");
    }
    else if((H >= 1200) & (H < 1800))
    {
        printf("Gratificação: R$300,00\n");        
    }
    else if ((H >= 600) & (H < 1200))
    {
        printf("Gratificação: R$200,00\n");
    }
    else
    {
        printf("Gratificação: R$100,00\n");
    }
 
    return 0;
}
