//Lista 25 Exercícios - Ex 24

#include <stdio.h>

int main()
{
    float dinheiro, d, ma, le;
    
    printf("Conversão de Real para Dólares, Marco Alemão e Libra Esterlina\n");
    printf("Quantidade de dinheiro disponível: R$");
    scanf("%f",&dinheiro);
    d = dinheiro/1.80;
    ma = dinheiro/2.00;
    le = dinheiro/3.57;
    printf("Conversão para Dólares: $%.2f\n",d);
    printf("Conversão para Marco Alemão: DEM%.2f\n",ma);
    printf("Conversão para Libra Esterlina: £%.2f\n",le);

    return 0;
}
