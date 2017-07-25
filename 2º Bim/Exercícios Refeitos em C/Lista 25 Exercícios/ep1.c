//Lista 25 Exercícios - Ex 1

#include <stdio.h>

int main()
{
    int N1, N2, sub;
    
    printf("Subtração de dois números\n");
    printf("Escreva dois números\n");
    scanf("%d %d",&N1,&N2);
    printf("1º número: %d\n", N1);
    printf("2º número: %d\n", N2);
    sub = N1 - N2;
    printf("O resultado da subtração de %d - %d = %d\n ", N1, N2, sub);

    return 0;
}
