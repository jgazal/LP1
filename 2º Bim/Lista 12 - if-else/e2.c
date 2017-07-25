#include<stdio.h>

int main()
{
	int N;
	
	printf("Informe um número: ");
	scanf("%d",&N);	
	if(N%2==0)
		printf("Par\n");
	else
		printf("Ímpar\n");
	
	return 0;
}
