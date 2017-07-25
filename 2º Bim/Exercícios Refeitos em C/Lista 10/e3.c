//Lista de Exercícios 10 - Exercício 3

#include <stdio.h>

int main ()
{
    int N;

    printf("Número Positivo, Negativo ou Nulo\n");
    printf("Digite um número: ");
    scanf("%d",&N);
    if(N > 0)
    {
        printf("Positivo\n");
    }
    else if (N < 0)
    {
        printf("Negativo\n");
    }
    else
    {
        printf("Nulo\n");    
    }

    return 0;
}
