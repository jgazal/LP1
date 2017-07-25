//Lista avaliativa 1º Bim - Exercício 5

#include<stdio.h>

int main()
{
    int N, R;
    int tx = 7;
    
    printf("Conta de água\n");
    printf("\nConsumo da residência (m³): ");
    scanf("%d",&N);
    if((N>=0) & (N<=10))
    {
            printf("%d\n",tx);
    }else 
        if((N>=11) & (N<=30))
        {
            R = (N-10)*1 + tx;
            printf("R$%d\n",R);
        }else
            if((N>=31) & (N<=100))
            {
                R = (N-30)*2 + 20 + tx;
                 printf("R$%d\n",R);
            }else
                if((N>=101) & (N<=1000))
                {
                    R = (N-100)*5 + 140 + 20 + tx;
                    printf("R$%d\n",R);
                }else
                    {
                        printf("Valor inválido\n");            
                    }

    return 0;
}
