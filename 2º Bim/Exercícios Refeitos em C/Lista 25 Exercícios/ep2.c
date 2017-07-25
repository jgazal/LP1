//Lista 25 Exercícios - Ex 2

#include <stdio.h>

int main()
{
    int N1, N2, N3, mult;
   
    printf("Multiplicação de três números\n");
    printf("Escreva três números\n");
    scanf("%d %d %d",&N1,&N2,&N3);
    printf("1º número: %d\n", N1);
    printf("2º número: %d\n", N2);
    printf("3º número: %d\n", N3);
    mult = N1 * N2 * N3;
    printf("O resultado da multiplicação de %d*%d*%d = %d\n ", N1, N2, N3, mult);

    return 0;
}
