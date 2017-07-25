//Lista de Exercícios 10 - Exercício 8

#include <stdio.h>

int main ()
{
    int tipo_combustivel;   
    float litros_abastecidos, total_pagar;

    printf("Litros abastecidos: ");
    scanf("%f",&litros_abastecidos);
    printf("\n1-Álcool\n2-Gasolina\nTipo de combustível: ");
    scanf("%d",&tipo_combustivel);
    switch(tipo_combustivel)
    {
        case 1:
            if(litros_abastecidos <= 20)
            {
                total_pagar = (litros_abastecidos*2.69)*0.97;
                printf("Álcool:\nTotal a Pagar: R$%.2f\n",total_pagar);
            }
            else if(litros_abastecidos > 20)
            {
                total_pagar = (litros_abastecidos*2.69)*0.95;
                printf("Álcool:\nTotal a Pagar: R$%.2f\n",total_pagar);            
            }
        break;

        case 2:
            if(litros_abastecidos <= 20)
            {
                total_pagar = (litros_abastecidos*3.69)*0.96;
                printf("Álcool:\nTotal a Pagar: R$%.2f\n",total_pagar);
            }
            else if(litros_abastecidos > 20)
            {
                total_pagar = (litros_abastecidos*3.69)*0.94;
                printf("Álcool:\nTotal a Pagar: R$%.2f\n",total_pagar);            
            }
        break;
        
        default:
            printf("Inválido\n");  
    }    
        
    return 0;
}
