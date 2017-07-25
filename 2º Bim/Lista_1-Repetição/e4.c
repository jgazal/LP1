/* Criar um algoritmo que leia dez números inteiros e imprima o maior e o segundo maior número da lista.*/

#include<stdio.h>

int main()
{
    int N, i, Maior1=0, Maior2=0;

    printf("Digite 10 números: \n"); 
    for(i = 1; i<=10; i++)
    {
        scanf("%d", &N);

        if(N > Maior1)
        {
            Maior2 = Maior1;
            Maior1 = N;
        }
        else
        {
            if(N < Maior1 && N > Maior2)
            {
                Maior2 = N;
            }
        }
    }
    printf("Maior número digitado: %d\n", Maior1);
    printf("Segundo maior número digitado: %d\n", Maior2);

    return 0;
}
