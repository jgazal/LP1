#include<stdio.h>

int main()
{

    int cod_item, qtd, cont;
    float preco, custo_item, total_pagar=0, valor_recebido, troco;

    do
    {    
        do
        {    
            printf("\nCódigo: ");
            scanf("%d", &cod_item);
            printf("Quantidade: ");
            scanf("%d", &qtd);
            printf("Preço: R$");
            scanf("%f", &preco);
            custo_item = qtd*preco;
            total_pagar = total_pagar + custo_item;
            printf("Custo do item: R$%.2f", custo_item);
            printf("\n");
        }while(cod_item!=0);

        printf("\nTotal a pagar: R$%.2f\n", total_pagar);
        printf("Valor recebido: R$");
        scanf("%f", &valor_recebido);
        if(valor_recebido>total_pagar)
        {
            troco = valor_recebido - total_pagar;
            printf("Troco: R$%.2f\n", troco);        
        }
        printf("Deseja continuar? (1- Sim | 2- Não) ");
        scanf("%d", &cont);    
    }while(cont!=2);
    
    return 0;
}
