#include<stdio.h>
#include<stdlib.h>

int main()
{
    int op, qtd;
    float valor, conta=0.0;

    do{
    system("clear");   
    printf("=============MENU=============\n");
    printf("[1] Cachorro quente - R$1,50\n");
    printf("[2] Hamburguer - R$2,00\n");
    printf("[3] Cheeseburger - R$2,50\n");
    printf("[4] Eggcheeseburger - R$3,00\n");
    printf("[5] Refrigerante - R$1,50\n");
    printf("[6] CONTA\n");
    printf("[7] SAIR\n");
    printf("\nOpção: ");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            system("clear"); 
            printf("\nCachorro quente\n");
            printf("---------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*1.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 2:
            system("clear"); 
            printf("\nHamburguer\n");
            printf("----------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*2.00;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 3:
            system("clear"); 
            printf("\nCheeseburguer\n");
            printf("-------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*2.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 4:
            system("clear"); 
            printf("\nEggcheeseburguer\n");
            printf("----------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*3.00;
            printf("Valor: R$%.2f", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 5:
            system("clear"); 
            printf("\nRefrigerante\n");
            printf("------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*1.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;  
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 6:
            system("clear"); 
            printf("Total do pedido: R$%.2f\n", conta);  
            printf("\n0 - Voltar\n");
            scanf("%d", &op);    
        break;
        default: printf("Valor inválido\n");
    } 
    }while(op!=7); 

    return 0;
}
