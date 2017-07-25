/* Uma Empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de
consumo. Para cada consumidor, são digitados os seguintes dados:
- Número do consumidor;
- Quantidade de kWh consumidos durante o mês;
- Tipo (código) do consumidor.
1 – residencial, preço em reais por kWh = 0,3
2 – comercial, preço em reais por kWh = 0,5
3 – industrial, preço em reais por kWh = 0,7
Os dados devem ser lidos até que seja encontrado um consumidor com Número 0 (zero).
Escreva um algoritmo que calcule e imprima:
- O custo total para cada consumidor;
- O total de consumo para os três tipos de consumidor;
- A média de consumo dos tipos 1 e 2. */

#include<stdio.h>

int main()
{
    int nc, kwh, tipo, total_consumo=0, i=0;
    float p_tipo1=0.3, p_tipo2=0.5, p_tipo3=0.7, c1=0.0, c2=0.0, media;   

    do{
        printf("Número do consumidor: ");
        scanf("%d", &nc);
        printf("Quantidade de kWh consumidos durante o mês: ");
        scanf("%d", &kwh);
        printf("Tipo (código) do consumidor: ");
        scanf("%d", &tipo);
    
        if(tipo==1)
        {
            c1 = c1 + kwh;
            i++;           
        }
        if(tipo==2)
        {
            c2 = c2 + kwh;
            i++;            
        }
       
        total_consumo = total_consumo + kwh;
    
        switch(tipo)
        {
            case 1: printf("Valor total: R$%.2f\n", kwh*p_tipo1);break;
            case 2: printf("Valor total: R$%.2f\n", kwh*p_tipo2);break; 
            case 3: printf("Valor total: R$%.2f\n", kwh*p_tipo3);break;
            default: printf("Valor inválido\n");    
        }
      
        printf("\n");
    }while(nc!=0);

    media = (c1+c2)/i;
    printf("Total de consumo: %d kWh\n", total_consumo);
    printf("Média de consumo dos tipos 1 e 2: %.0f kWh\n", media);
    
    return 0;
}
