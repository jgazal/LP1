//Lista 25 Exercícios - Ex 21

#include <stdio.h>

int main()
{
    float ht, sm, he, sr, sb, vht, vhe, vrhe;
    
    printf("Salário a receber por um funcionário\n");
    printf("Horas trabalhadas = ");
    scanf("%f",&ht);
    printf("Salário mínimo = R$");
    scanf("%f",&sm);
    printf("Horas extras = ");
    scanf("%f",&he);
    vht = sm/8;
    vhe = sm/4;
    sb = ht*vht;
    vrhe = he*vhe;
    sr = sb+vrhe;
    printf("Salário a receber = R$%.2f\n",sr);
    
    return 0;
}
