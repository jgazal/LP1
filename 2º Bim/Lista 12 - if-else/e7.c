#include<stdio.h>

int main()
{
	int tipo;
	float litros, pg = 3.69, pa = 2.69, calc;
	
	printf("Litros abastecidos: ");
	scanf("%f",&litros);
	printf("Combustível: \n");
	printf("1- Álcool\n");
	printf("2- Gasolina\n");
	scanf("%d",&tipo);
	
	switch(tipo)
	{
		case 1: 
			if(litros<=20)
			{
				calc = (litros*pa)*0.97;
				printf("Valor a ser pago: R$%.2f\n",calc);
			}
			else
			{
				calc = (litros*pa)*0.95;
				printf("Valor a ser pago: R$%.2f\n",calc);
			}
		break;
		case 2:
			if(litros<=20)
			{
				calc = (litros*pg)*0.96;
				printf("Valor a ser pago: R$%.2f\n",calc);
			}
			else
			{
				calc = (litros*pg)*0.94;
				printf("Valor a ser pago: R$%.2f\n",calc);
			}
		break;		
	} 
	
	return 0;
}
