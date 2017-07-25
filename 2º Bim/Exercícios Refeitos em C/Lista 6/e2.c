//Lista de Exercícios 6 - Exercício 2

#include <stdio.h>

int main ()
{
    float l_usados;
    int t_gasto, vm, d;
    
    printf("Quantidade de litros de combustível gastos em uma viagem\n");
    printf("Tempo gasto na viagem: ");
    scanf("%d",&t_gasto);
    printf("Velocidade Média: ");
    scanf("%d",&vm); 
    d = t_gasto*vm;
    l_usados = d/12;
    printf("Distância: %d\n",d);
    printf("Litros utilizados: %.2f\n",l_usados);

    return 0;
}
