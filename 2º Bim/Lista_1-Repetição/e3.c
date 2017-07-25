/*Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela com cabeçalho, que deve ser repetido a cada 20 linhas. A tabela conterá o valor lido, seu quadrado, seu cubo e sua raiz quadrada.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, cont=0;

    scanf("%d", &n);
    while(n >= 0)
    {
        cont++;
        if(cont%20==1)
        {
            printf("===================TABELA===================\n");
            printf("|    n    |    n²    |    n³    |    √n    |\n");
            printf("--------------------------------------------\n");

        printf("|    %d    |    %d     |    %.0lf     |    %.0lf     |\n", n, n*n, pow(n,3), sqrt(n));

        printf("\n");
        scanf("%d", &n);
        }
    }
    
    return 0;
}
