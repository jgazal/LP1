//Lista 25 Exercícios - Ex 12

#include <stdio.h>

int main()
{
    float sm, sf, q_sal;

    printf("Cálculo da quantidade de salários mínimos\n");
    printf("Digite o valor do salário mínimo: R$");
    scanf("%f",&sm);
    printf("Digite o valor do salário do funcionário: R$");
    scanf("%f",&sf);
    printf("Salário Mínimo: R$%.2f\n",sm);
    printf("Salário do Funcionário: R$%.2f\n",sf);
    q_sal = sf/sm;
    printf("Quantidade de salário mínimos que o funcionário recebe: %.2f\n",q_sal);

    return 0;
}
