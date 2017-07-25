#include<stdio.h>

int main()
{
	int A,B;
	
	printf("1º Número: ");
	scanf("%d",&A);
	printf("2º Número: ");
	scanf("%d",&B);
	
	if(A%B==0 || B%A==0)
		printf("Divisível");
	else
		printf("Não divisível");

	return 0;
}
