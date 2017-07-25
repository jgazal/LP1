//Lista 25 Exercícios - Ex 15

#include <stdio.h>

int main()
{
    float s, c1, c2, mc1, mc2, sf;
    
    printf("Valor do salário: R$");
    scanf("%f",&s);
    printf("Valor da conta 1: R$");
    scanf("%f",&c1);
    printf("Valor da conta 2: R$");
    scanf("%f",&c2);
    mc1 = c1*1.02;
    mc2 = c2*1.02;
    sf = s - (mc1 + mc2);
    printf("Conta 1 com multa de 2%% = R$%.2f\n",mc1);
    printf("Conta 2 com multa de 2%% = R$%.2f\n",mc2);
    printf("Salário final após pagar as multas = R$%.2f\n",sf);    
    
    return 0;
}
