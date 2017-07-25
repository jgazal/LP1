#include<stdio.h>

int main()
{
	int bit, b50, b10, b5, b1;
	
	printf("Quantidade de Bits: R$");
	scanf("%d",&bit);
	b50 = bit/50;
	b10 = (bit%50)/10;
	b5 = ((bit%50)%10)/5;
	b1 = ((bit%50)%10)%5;
	printf("Notas de 50: %d\n",b50);
	printf("Notas de 10: %d\n",b10);
	printf("Notas de 5: %d\n",b5);
	printf("Notas de 1: %d\n",b1);
	
	return 0;
}
