//Lista de Exercícios 3 - Exercício 3

#include <stdio.h>

int main()
{
    float p, np;

    printf("Preço do produto: R$");
    scanf("%f",&p);
    np = p*0.90;
    printf("Preço do produto com desconto de 10%% = R$%.2f\n",np);

    return 0;
}
