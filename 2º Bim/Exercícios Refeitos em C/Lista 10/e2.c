//Lista de Exercícios 10 - Exercício 2

#include <stdio.h>

int main ()
{
    int N;

    printf("Número Par ou Ímpar\n");
    printf("Digite um número: ");
    scanf("%d",&N);
    if(N%2 == 0)
    {
        printf("PAR\n");
    }
    else
    {
        printf("ÍMPAR\n");
    }

    return 0;
}
