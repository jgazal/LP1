//Lista avaliativa 1º Bim - Exercício 1

#include <stdio.h>

int main()
{
    int valor1, valor2, triplo;
    
    printf("Triplo do Maior\n");
    printf("1º Valor: ");
    scanf("%d",&valor1);
    printf("2º Valor: ");
    scanf("%d",&valor2);
    if((valor1>=0) & (valor1<=1000) & (valor2>=0) & (valor2<=1000) & (valor1!=valor2))
    {
        if(valor1>valor2)
        {
            triplo = valor1*3;
            printf("%d\n",triplo);
        }
        else
        {
            triplo = valor2*3;
            printf("%d\n",triplo);
        }
    }
    else
    {
        printf("Valor inválido\n");
    }
}
