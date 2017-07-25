/*Faça um algoritmo para calcular o valor de S, dado pela equação abaixo, sendo N o valor de entrada.
𝑆 = 1/N + 2/N-1 + 3/N-2 +...+ N-1/2 + N/1 */

#include<stdio.h>

int main()
{
    int i;
    float N, S, j;

    printf("N: ");
    scanf("%f", &N);
    S = 1/N;
    for(i=2, j=N; i<=N; i++, j--)
    {
        S = S + i/(j-1);
    }
        printf("S = %.1f\n", S);
    
    return 0;
}


