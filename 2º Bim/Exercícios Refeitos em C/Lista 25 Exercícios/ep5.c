//Lista 25 Exercícios - Ex 5

#include <stdio.h>

int main()
{
    float p, np;

    printf("Preço do produto: \n");
    scanf("%f",&p);
    printf("%.2f\n", p);
    np = p*0.90;
    printf("Preço com desconto de 10%% : %.2f\n ", np);

    return 0;
}
