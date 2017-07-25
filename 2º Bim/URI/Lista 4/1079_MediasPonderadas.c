/* Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores. */

#include <stdio.h>

int main()
{
    int N;    
    double i, mediaP, v1, v2, v3;
    
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%lf %lf %lf",&v1, &v2, &v3);
        mediaP = ((v1/5.0) + ((v2*3.0)/10.0) + (v3/2.0));
        printf ("%.1lf\n", mediaP);
    }
    return 0;
}
