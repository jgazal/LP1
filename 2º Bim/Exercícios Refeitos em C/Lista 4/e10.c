//Lista de Exercícios 4 - Exercício 10

#include <stdio.h>
#include <math.h>

int main ()
{
    float peso, altura, IMC;

    printf("Cálculo do IMC\n");
    printf("Peso: ");
    scanf("%f",&peso);
    printf("Altura: ");
    scanf("%f",&altura);
    IMC = peso/pow(altura,2);
    printf("IMC: %.2f\n",IMC);
    
    return 0;
}
