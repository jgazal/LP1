//Lista de Exercícios 6 - Exercício 5

#include <stdio.h>

int main ()
{
    float vc,m, IPVA, Seguro, vp;

    printf("Valor a ser pago no relicenciamento do carro\n");
    printf("Valor do carro: R$");
    scanf("%f",&vc);
    printf("Multas: R$");
    scanf("%f",&m); 
    IPVA = vc*0.10;
    Seguro = IPVA*0.20;
    printf("IPVA: R$%.2f\n",IPVA);  
    printf("Seguro Obrigatório: R$%.2f\n",Seguro);
    vp = IPVA+m+Seguro;
    printf("Valor do Relicenciamento do Carro: R$%.2f\n",vp);    

    return 0;
}
