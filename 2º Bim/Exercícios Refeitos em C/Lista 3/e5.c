//Lista de Exercícios 3 - Exercício 5

#include <stdio.h>

int main()
{
    int p, pg, np;

    printf("Peso (Kg) = ");
    scanf("%d",&p);
    pg = p*1000;
    np = pg*1.12;
    printf("Peso em gramas = %dg\n",pg);
    printf("Peso em gramas se engordar 12%% = %dg\n",np);

    return 0;
}
