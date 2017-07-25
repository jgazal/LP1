/* Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

Codigo  Especificação    Preço
1       Cachorro Quente  R$4.00
2       X-Salada         R$4.50
3       X-Bacon          R$5.00
4       Torrada Simples  R$2.00
5       Refrigerante     R$1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal. */

#include <stdio.h>
 
int main() {
 
    int cod,qtd;
    float calc;

    scanf("%d %d",&cod,&qtd);
    if(cod==1)
    {
        calc = qtd*4.0;         
        printf("Total: R$ %.2f\n",calc);
    }
    else if(cod==2)
    {
        calc = qtd*4.50; 
        printf("Total: R$ %.2f\n",calc);
    }
    else if(cod==3)
    {
         calc = qtd*5.0;        
        printf("Total: R$ %.2f\n",calc);
    }
    else if(cod==4)
    {
        calc = qtd*2.0; 
        printf("Total: R$ %.2f\n",calc);
    }
    else if(cod==5)
    {
        calc = qtd*1.50; 
        printf("Total: R$ %.2f\n",calc);
    }
 
    return 0;
}
