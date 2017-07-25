#include<stdio.h>

int main()
{
    int i, codigo, diarias, valor_diaria=300, valor_pagar, total_ganho=0, total_diarias=0;

    for(i=1; i<=5; i++)
    {
        printf("\nCódigo: ");
        scanf("%d", &codigo);
        printf("Número de diárias: ");
        scanf("%d", &diarias);
        total_diarias = total_diarias + diarias;
        if(diarias<15)
        {
            valor_pagar = valor_diaria + 20;
            printf("Valor a pagar: R$%d", valor_pagar); 
            total_ganho = total_ganho + valor_pagar;         
        }
        if(diarias==15)
        {
            valor_pagar = valor_diaria + 14;     
            printf("Valor a pagar: R$%d", valor_pagar); 
            total_ganho = total_ganho + valor_pagar;           
        }
        if(diarias>15)
        {
            valor_pagar = valor_diaria + 12;   
            printf("Valor a pagar: R$%d", valor_pagar);  
            total_ganho = total_ganho + valor_pagar;             
        }
        printf("\n");    
    }
    printf("\n__________________________________________\n");
    printf("\nTotal ganho pelo hotel: R$%d\n",total_ganho);
    printf("Número total de diárias: %d\n", total_diarias );

    return 0;
}
