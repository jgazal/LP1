//Lista de Exercícios 3 - Exercício 1

#include <stdio.h>

int main()
{
    int N1, N2, N3, Multi;

    printf("Multiplicação de três números\n");
    printf("1º número: ");
    scanf("%d",&N1);
    printf("2º número: ");
    scanf("%d",&N2);
    printf("3º número: ");
    scanf("%d",&N3);
    Multi = N1*N2*N3;
    printf("A multiplicação de %d*%d*%d = %d\n",N1,N2,N3,Multi);

    return 0;
}
