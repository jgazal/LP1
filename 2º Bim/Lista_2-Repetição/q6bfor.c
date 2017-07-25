#include<stdio.h>

int main()
{
    int n, i, soma=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n>1)
    {
        for(i=1; i<=n; i++)
        {
            if(i%5==0)
            {
                printf("%d\n", i);
                soma = soma + i;
            }            
        }
    }
    printf("Soma dos múltimplos de 5 no internalo de 1 a n: %d\n", soma);


    return 0;
}
