/* Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto. */

#include <stdio.h>

int main()
{
    int N, i, Quantia, C=0, R=0, S=0, cobaias;
    double PC,PR,PS;
    char Tipo;

    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %c",&Quantia, &Tipo);
        if(Tipo=='C') 
        {
            C+=Quantia;
        }
        else if(Tipo=='R') 
        {
            R+=Quantia;
        }
        else if(Tipo=='S')
        {
            S+=Quantia;
        } 
    }
    cobaias=C+R+S;
    PC=(C/(cobaias*1.0))*100.00;
    PR=(R/(cobaias*1.0))*100.00;
    PS=(S/(cobaias*1.0))*100.00;

    printf("Total: %d cobaias\n",cobaias);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",PC);
    printf("Percentual de ratos: %.2lf %%\n",PR);
    printf("Percentual de sapos: %.2lf %%\n",PS);
    return 0;
}
