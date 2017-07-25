//Lista 25 Exercícios - Ex 22

#include <stdio.h>

int main()
{
    int N, ND;    

    printf("Cálculo do número de diagonais de um polígono convexo\n");   
    printf("Número de lados do polígono: ");
    scanf("%d",&N);
    ND = N*(N-3)/2;
    printf("Número de diagonais do polígono = %d\n",ND);
 
    return 0;
}
