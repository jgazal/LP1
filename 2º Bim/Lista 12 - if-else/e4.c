#include<stdio.h>

int main()
{
	int N1, N2, N3;
	
	printf("1º Número: ");
	scanf("%d",&N1);
	printf("2º Número: ");
	scanf("%d",&N2);
	printf("3º Número: ");
	scanf("%d",&N3);
	
	if(N1>N2 && N1>N3)
		printf("Maior número digitado: %d\n",N1);
	else if(N2>N1 && N2>N3)
		printf("Maior número digitado: %d\n",N2);
	else if(N3>N1 && N3>N2)
		printf("Maior número digitado: %d\n",N3);
	else if(N1==N2 && N2==N3)
		printf("Valores iguais\n");
	
	return 0;
}

