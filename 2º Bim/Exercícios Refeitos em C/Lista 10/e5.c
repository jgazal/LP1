//Lista de Exercícios 10 - Exercício 5

#include <stdio.h>

int main ()
{
    float salario, reajuste;

    printf("Salário do Funcionário: R$");
    scanf("%f",&salario);
    if(salario < 1000.00)
    {
        reajuste = salario*1.30;
        printf("Salário reajustado: R$%.2f\n",reajuste);
    }    
    else
    {
        printf("Sem direito a aumento no salário\n");    
    }
    
    return 0;
}
