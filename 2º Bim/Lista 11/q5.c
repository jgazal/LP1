#include<stdio.h>
#include<math.h>

int main()
{
	float R, C, A, V;
	float pi = 3.14;

	printf("Cálculo do comprimento, área e volume de uma esfera\n");
	printf("\nInforme o Raio: ");
	scanf("%f",&R);
	C = 2*pi*R;
	A = pi*pow(R,2); 	
	V = 3.0/4*pi*pow(R,3);
	printf("Comprimento: %.2f\n",C);
	printf("Área: %.2f\n",A);
	printf("Volume: %.2f\n",V);

	return 0;
}
