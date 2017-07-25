#include <stdio.h>
 
int main()
{
    float divida=10000, juros=0.025, aplicacao=1500, rendimento=0.04;
    int meses=0;
 
    while(divida>aplicacao) 
    {
        divida = divida + (divida * juros);
        aplicacao = aplicacao + (aplicacao * rendimento);
        meses++;
    }
    printf("Quantidade de meses para pagar a divida: %d\n", meses);
 
    return 0;
}
