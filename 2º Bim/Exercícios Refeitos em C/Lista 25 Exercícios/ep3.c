//Lista 25 Exercícios - Ex 3

#include <stdio.h>

int main()
{
    float N1, N2, divi;
    
    printf("Divisão de dois números\n");
    printf("Escreva dois números\n");
    scanf("%f %f",&N1,&N2);
    printf("1º número: %.0f\n", N1);
    printf("2º número: %.0f\n", N2);
    divi = N1 / N2;
    printf("O resultado da divisão de %.0f/%.0f = %.1f\n ", N1, N2, divi);

    return 0;
}
