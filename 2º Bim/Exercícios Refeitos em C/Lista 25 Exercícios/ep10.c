//Lista 25 Exercícios - Ex 10

#include <stdio.h>

int main()
{
    float A, l;

    printf("Cálculo da área do quadrado\n");
    printf("Digite o valor do lado do quadrado\n");
    scanf("%f",&l);
    printf("Lado do quadrado: %.2f\n",l);
    A = l*l;
    printf("Área do quadrado: %.2f\n",A);

    return 0;
}
