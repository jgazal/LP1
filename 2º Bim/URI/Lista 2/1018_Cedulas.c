/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/

#include <stdio.h>

int main()
{
    int N,N100,N50,N20,N10,N5,N2,N1,Aux_100,Aux_50,Aux_20,Aux_10,Aux_5;

    scanf ("%d", &N);
    N100 = N/100;
    Aux_100 = N%100;
    N50 = Aux_100/50;
    Aux_50 = Aux_100%50;
    N20 = Aux_50/20;
    Aux_20 = Aux_50%20;
    N10 = Aux_20/10;
    Aux_10 = Aux_20%10;
    N5 = Aux_10/5;
    Aux_5 = Aux_10%5;
    N2 = Aux_5/2;
    N1 = Aux_5%2;

    printf ("%d\n",N);
    printf ("%d nota(s) de R$ 100,00\n",N100);
    printf ("%d nota(s) de R$ 50,00\n",N50);
    printf ("%d nota(s) de R$ 20,00\n",N20);
    printf ("%d nota(s) de R$ 10,00\n",N10);
    printf ("%d nota(s) de R$ 5,00\n",N5);
    printf ("%d nota(s) de R$ 2,00\n",N2);
    printf ("%d nota(s) de R$ 1,00\n",N1);

    return 0;
}
