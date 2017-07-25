/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.*/

#include <stdio.h>
int main()
{
    double N,D,E;
    int N100,N50,N20,N10,N5,N2,M1,M50,M25,M10,M5,M01,b,d,f,h,j,m,o,q,s,A,B;

    scanf ("%lf",&N);
    A = N;
    N100 = A/100;
    b = A%100;
    N50 = b/50;
    d = b%50;
    N20 = d/20;
    f = d%20;
    N10 = f/10;
    h = f%10;
    N5 = h/5;
    j = h%5;
    N2 = j/2;
    M1 = j%2;

    E = N*100;
    B = (int) E;
    m = B%100;
    M50 = m/50;
    o = m%50;
    M25 = o/25;
    q = o%25;
    M10 = q/10;
    s = q%10;
    M5 = s/5;
    M01 = s%5;

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",N100);
    printf ("%d nota(s) de R$ 50.00\n",N50);
    printf ("%d nota(s) de R$ 20.00\n",N20);
    printf ("%d nota(s) de R$ 10.00\n",N10);
    printf ("%d nota(s) de R$ 5.00\n",N5);
    printf ("%d nota(s) de R$ 2.00\n",N2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",M1);
    printf ("%d moeda(s) de R$ 0.50\n",M50);
    printf ("%d moeda(s) de R$ 0.25\n",M25);
    printf ("%d moeda(s) de R$ 0.10\n",M10);
    printf ("%d moeda(s) de R$ 0.05\n",M5);
    printf ("%d moeda(s) de R$ 0.01\n",M01);

    return 0;
}
