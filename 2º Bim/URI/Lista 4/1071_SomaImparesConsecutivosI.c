/* Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro. */

#include <stdio.h>

int main()
{
    int X, Y, soma=0;

    scanf("%d %d", &X, &Y);
    if(X==Y)
    {
        printf("%d\n",soma);
    }
    else if(X < Y)
    {
        for(X=X+1; X<Y; X++)
        {
            if(X%2!=0)
            {
                soma+=X;
            } 
        }
        printf("%d\n",soma);
    }
    else if(X > Y)
    {
        for(Y=Y+1; Y<X; Y++)
        {
            if(Y%2!=0)
            {
                soma+=Y;
            }
        }
        printf("%d\n",soma);
    }
    return 0;
}
