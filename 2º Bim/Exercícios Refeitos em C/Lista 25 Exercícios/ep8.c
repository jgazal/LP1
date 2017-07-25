//Lista 25 Exercícios - Ex 8

#include <stdio.h>

int main()
{
    float p_kg, p_g;

    printf("Digite o seu peso: \n");
    scanf("%f",&p_kg);
    p_g = p_kg*1000;
    printf("Peso em gramas: %.0f\n",p_g);

    return 0;
}
