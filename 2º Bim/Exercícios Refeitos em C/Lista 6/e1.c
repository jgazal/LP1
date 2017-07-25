//Lista de Exercícios 6 - Exercício 1

#include <stdio.h>

int main ()
{
    float sal_min, cem_quilowatts, vq, vp, nvp;
    int quilowatts;
    
    printf("Quilowatts gastos por uma residência\n");
    printf("Salário Mínimo: R$");
    scanf("%f",&sal_min);
    printf("Quilowatts gastos: ");
    scanf("%d",&quilowatts);
    cem_quilowatts = sal_min/7;
    vq = cem_quilowatts/100;
    printf("100 Quilowatts custam: R$%.2f\n",cem_quilowatts);
    printf("1 Quilowatt custa: R$%.2f\n",vq);
    vp = vq*quilowatts;    
    printf("Valor a ser pago: R$%.2f\n",vp);
    nvp = vp*0.85;
    printf("Valor a ser pago com desconto de 15%%: R$%.2f\n",nvp);
    
    return 0;
}
