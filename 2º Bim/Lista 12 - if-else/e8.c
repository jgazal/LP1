#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int escolha, N1, N2,calc;
	do{
	printf("\n===MENU OPERAÇÕES===\n");
	printf("1. Somar dois números\n");
	printf("2. Raiz quadrada de um número\n");
	printf("3. Cubo de um número\n");
	printf("4. Diferença do maior pelo maior\n");
	printf("Opção: ");
	scanf("%d",&escolha);
	switch(escolha)
	{
		case 1:
			printf("1º Número: ");
			scanf("%d",&N1);
			printf("2º Número: ");
			scanf("%d",&N2);
			calc = N1+N2;
			printf("A soma de %d + %d = %d\n",N1,N2,calc);
		break;
		case 2:
			printf("Número: ");
			scanf("%d",&N1);
			calc = sqrt(N1);
			printf("A raíz quadrada de %d = %d\n",N1,calc);
		break;
		case 3:
			printf("Número: ");
			scanf("%d",&N1);
			calc = pow(N1,3);
			printf("O cubo de  %d = %d\n",N1,calc);
		break;
		case 4:
			printf("1º Número: ");
			scanf("%d",&N1);
			printf("2º Número: ");
			scanf("%d",&N2);
			if(N1>N2)
			{
				calc = N1-N2;
				printf("%d - %d = %d\n",N1,N2,calc);
			}
			else
			{
				calc = N2-N1;
				printf("%d - %d = %d\n",N2,N1,calc);	
			}
		break;		
	}
	}while(escolha<5);	

	return 0;
}
