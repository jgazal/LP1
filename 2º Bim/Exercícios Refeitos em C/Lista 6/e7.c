//Lista de Exercícios 6 - Exercício 7

#include <stdio.h>

int main()
{
    int cc, dv, c, d, u, cc_invertido, soma, scc, scd, scu, soma2;

    printf("Número da conta corrente (3 dígitos): ");
    scanf("%d",&cc);
    c = cc/100;
    d = (cc%100)/10;
    u = (cc%100)%10;
    cc_invertido = u*100+d*10+c;
    printf("Número da conta invertido: %d\n",cc_invertido);
    soma = cc + cc_invertido;
    printf("Número da conta mais o seu inverso: %d\n",soma);
    scc = (soma/100)*1;
    scd = ((soma%100)/10)*2;
    scu = ((soma%100)%10)*3;
    soma2 = scc+scd+scu;
    printf("Soma 2 = %d\n",soma2);
    dv = soma2%10;
    printf("Dígito verificador: %d\n",dv);
    
    return 0;
}
