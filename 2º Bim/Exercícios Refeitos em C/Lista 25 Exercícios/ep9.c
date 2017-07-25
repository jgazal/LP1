//Lista 25 Exercícios - Ex 9

#include <stdio.h>

int main()
{
    float A, b_maior, b_menor, altura;

    printf("Cálculo da área do trapézio\n");
    printf("Digite o valor da Base Maior, Base Menor e Altura\n");
    scanf("%f %f %f",&b_maior, &b_menor, &altura);
    printf("Base Maior: %.2f\n",b_maior);
    printf("Base Menor: %.2f\n",b_menor);
    printf("Altura: %.2f\n",altura);
    A = ((b_maior+b_menor)*altura)/2;
    printf("Área do trapézio: %.2f\n",A);

    return 0;
}
