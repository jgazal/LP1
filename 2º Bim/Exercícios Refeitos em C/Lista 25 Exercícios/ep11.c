//Lista 25 Exercícios - Ex 11

#include <stdio.h>

int main()
{
    float A, d_maior, d_menor;

    printf("Cálculo da área do losango\n");
    printf("Digite o valor da diagonal maior e da diagonal menor: \n");
    scanf("%f %f",&d_maior,&d_menor);
    printf("Diagonal Maior: %.2f\n",d_maior);
    printf("Diagonal Menor: %.2f\n",d_menor);
    A = (d_maior*d_menor)/2;
    printf("Área do losango: %.2f\n",A);

    return 0;
}
