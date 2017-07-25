/* A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário             Percentual de Reajuste
0-400.00            15%
400.01-800.00       12%
800.01-1200.00      10%
1200.01-2000.00     7%
Acima de 2000.00    4%   

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo. */

#include<stdio.h>

int main()
{
    double salario, novo_salario, reajuste, percentual;

    scanf("%lf",&salario);
    if(salario>=0 && salario<=400.00)
    {
        novo_salario = salario*1.15;
        reajuste = salario*0.15;
        printf("Novo salario: %.2lf\n",novo_salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 15 %%\n");         
    } 
    else if(salario>=400.01 && salario<=800.00)
    {
        novo_salario = salario*1.12;
        reajuste = salario*0.12;
        printf("Novo salario: %.2lf\n",novo_salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 12 %%\n");         
    }
    else if(salario>=800.01 && salario<=1200.00)
    {
        novo_salario = salario*1.10;
        reajuste = salario*0.10;
        printf("Novo salario: %.2lf\n",novo_salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 10 %%\n"); 
    }
    else if(salario>=1200.01 && salario<=2000.00)
    {
        novo_salario = salario*1.07;
        reajuste = salario*0.07;
        printf("Novo salario: %.2lf\n",novo_salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 7 %%\n"); 
    }
    else
    {
        novo_salario = salario*1.04;
        reajuste = salario*0.04;
        printf("Novo salario: %.2lf\n",novo_salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 4 %%\n");         
    }

    return 0;
}
