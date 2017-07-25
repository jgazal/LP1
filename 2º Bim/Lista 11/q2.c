#include<stdio.h>

int main()
{
	float salario_bruto, horas_extras, descontos, valor_horas_extras, proventos, salario_liquido;
	
	printf("Folha de pagamento de funcionário\n");
	printf("\nSalário Bruto: R$");
	scanf("%f",&salario_bruto);
	printf("Horas extras: ");
	scanf("%f",&horas_extras);
	printf("Descontos: R$");
	scanf("%f",&descontos);
	valor_horas_extras = horas_extras*20;
	printf("Valor das horas extras: R$%.2f\n",valor_horas_extras);
	proventos = salario_bruto + valor_horas_extras;
	printf("Proventos: R$%.2f\n",proventos);
	salario_liquido = proventos - descontos;
	printf("Salário Líquido: R$%.2f\n",salario_liquido);

	return 0;
}
