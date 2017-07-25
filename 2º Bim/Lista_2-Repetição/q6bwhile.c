#include<stdio.h>

int main()
{
    int n, i=1, soma=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n>1)
    {
        while(i>0 && i<=n)
        {
            if(i%5==0)
            {
                printf ("%d\n", i);
                soma = soma + i;
            }
            i++;            
        }
    }
    printf("Soma dos múltimplos de 5 no internalo de 1 a %d: %d\n", n, soma);

    return 0;
}
