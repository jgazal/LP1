/* Escreva um algoritmo que realize o produto de A (número real) por B (número inteiro), ou seja, A * B, através de adições (somas).*/

#include<stdio.h>

int main()
{
    float A, soma=0.0;
    int B, i;

    printf("Valor A: ");
    scanf("%f", &A);
    printf("Valor B: ");
    scanf("%d", &B);

    for(i=0; i<B; i++)
    {
        soma = soma + A;        
    }
    printf("A*B = %.1f\n", soma);

    return 0;
}
