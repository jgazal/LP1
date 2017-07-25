//Lista de Exercícios 4 - Exercício 9

#include <stdio.h>

int main ()
{
    char produto;
    int qt;
    float p, tot;
    
    printf("Cálculo do total de uma compra\n");
    printf("Produto: ");   
    scanf("%s",&produto);   //String %s
    printf("Quantidade: ");
    scanf("%d",&qt);
    printf("Preço: R$");
    scanf("%f",&p);
    tot = p*qt;
    printf("Total da compra: R$%.2f\n",tot);

    return 0;
}
