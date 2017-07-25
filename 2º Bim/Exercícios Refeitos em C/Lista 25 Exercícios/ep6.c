//Lista 25 Exercícios - Ex 6

#include <stdio.h>

int main()
{
    float s, c, v, sf;

    printf("Digite o salário de funcionário e o valor de suas vendas: \n");
    scanf("%f %f",&s,&v);
    c = v*0.04;
    printf("Comissão: R$%.2f\n",c);
    sf = s + c;
    printf("Salário Final: R$%.2f\n ",sf);

    return 0;
}
