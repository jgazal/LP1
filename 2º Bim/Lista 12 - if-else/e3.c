#include<stdio.h>

int main()
{
	int N;
	
	printf("Informe o número: ");
	scanf("%d",&N);	
	if(N>0)
		printf("POSITIVO\n");
	else if (N<0)
		printf("NEGATIVO\n");
	else
		printf("NULO\n");
	
	return 0;
}

