#include <stdio.h>
#include <stdlib.h>

int main()
{

    float saldo, saque, limite, valor, saldo_disp, saldo_cc, deposito;
    float poupanca = 0.00;
    int escolha, dep;

    printf("\nInforme o Saldo: R$");    
    scanf("%f",&saldo);
    do{
    printf("\n");
    printf("=======MENU=======\n");
    printf("1- Exibir Saldo\n");
    printf("2- Realizar Saque\n");
    printf("3- Realizar Depósito\n");
    printf("\nOpção: ");
    scanf("%d",&escolha);
    system("clear");
   
    switch(escolha)
    {
        case 1:
            printf("Saldo: R$%.2f\n",saldo);  
        break;
        case 2:
            printf("Valor do saque: R$");
            scanf("%f",&saque);
            if(saque > saldo)
            {
                printf("Limite do Cheque Especial: R$");
                scanf("%f",&limite);
                valor = saque*1.20;
                printf("Taxa a ser paga pelo Chque Especial: R$%.2f\n",valor);
                              
            }else
             {
                saldo_disp = saldo - saque;
                saldo = saldo_disp;
                printf("Saldo disponível na conta: R$%.2f\n",saldo_disp);

             }
        break;
        case 3:
            printf("=====DEPÓSITO=====\n");
            printf("1- Conta Corrente\n");
            printf("2- Conta Poupança\n");
            printf("Opção: ");
            scanf("%d",&dep);
            switch(dep)
            {
                case 1:
                    printf("Valor do depósito: R$");
                    scanf("%f",&deposito);
                    saldo = saldo + deposito;
                    printf("Saldo CC: R$%.2f\n",saldo);
                break;
                case 2:
                    printf("Valor do depósito: R$");
                    scanf("%f",&deposito);
                    poupanca = poupanca + deposito;
                    printf("Saldo Poupança: R%.2f\n",poupanca); 
                break;
                default: printf("Valor Inválido\n");         
            }  
        default: printf("Valor Inválid\n");                                     
    }     
    }
    while(escolha < 4);

    return 0;
}
