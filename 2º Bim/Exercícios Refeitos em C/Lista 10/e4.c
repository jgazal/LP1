//Lista de Exercícios 10 - Exercício 4

#include <stdio.h>

int main ()
{
    int N1, N2, N3;

    printf("Maior número entre três\n");
    printf("1º número: ");
    scanf("%d",&N1);
    printf("2º número: ");
    scanf("%d",&N2);
    printf("3º número: ");
    scanf("%d",&N3);
    if ((N1 > N2) & (N1 > N3))
    {
        printf("%d é o maior entre os três números digitados\n",N1);    
    }
    else if ((N2 > N1) & (N2 > N3))
    {
        printf("%d é o maior entre os três números digitados\n",N2);
    }
    else
    {
        printf("%d é o maior entre os três números digitados\n",N3);  
    }

    return 0;
}
