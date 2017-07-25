#include<stdio.h>

int main()
{
	float salario;
	
	printf("Salário do funcionário: R$");
	scanf("%f",&salario);
	if(salario<1000)
	{
		salario *= 1.30;
		printf("Salário reajustado: R$%.2f",salario);
	}
	else
		printf("Sem direito a aumento no salário.");
	
	return 0;
}

