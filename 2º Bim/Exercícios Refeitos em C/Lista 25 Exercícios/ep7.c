//Lista 25 Exercícios - Ex 7

#include <stdio.h>

int main()
{
    float p, np15, np20;

    printf("Digite o seu peso: \n");
    scanf("%f",&p);
    np15 = p*1.15;
    np20 = p*0.80;
    printf("Peso se engordar 15%%: %.2f\n",np15);
    printf("Peso se emagrecer 20%%: %.2f\n",np20);

    return 0;
}
