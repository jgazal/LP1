#include<stdio.h>
#include<math.h>

int main()
{
	int A = 5;
	int B = 10;
	int C = -8;
	float D = 1.5;
	float a,b,c,d,e,f;
	
	printf("Expressões\n");
	printf("a) 2 * A mod 3 - C\n");
	a = 2*A%3-C;
	printf("Resultado: %.0f\n",a);
	
	printf("\nb) rad(-2 * C) div 4\n");
	b = sqrt(-2*C)/4;
	printf("Resultado: %.0f\n",b);
	
	printf("\nc) ((20 div 3) div 3) + pot(8,2)/2\n");
	c = ((20/3)/3) + pow(8,2)/2;
	printf("Resultado: %.0f\n",c);
	
	printf("\nd) ((30 mod 4) * pot (3, 3) ) * -1\n");
	d = ((30%4)*(pow(3, 3)))*-1;
	printf("Resultado: %.0f\n",d);
	
	printf("\ne) pot(-C, 2) + (D * 10)/A\n");
	e = pow(-C,2)+(D*10)/A;
	printf("Resultado: %.0f\n",e);
	
	printf("\nf) rad(pot(A,B/A)) + C * D\n");
	f = sqrt(pow(A,B/A))+C*D;
	printf("Resultado: %.0f\n",f);
	
	return 0;
}
