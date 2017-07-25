/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes número será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.*/

#include <stdio.h>

int main()
{
    double A,B=0,C;
    int X,Y=0;
    
    for(X=1;X<=6;X++)
    {
        scanf("%lf", &A);
        if(A>=0)
        {
            Y++;
            B+=A;
        }
    }
    C=B/Y;
    printf ("%d valores positivos\n",Y);
    printf("%.1lf\n", C);
    
    return 0;
}

