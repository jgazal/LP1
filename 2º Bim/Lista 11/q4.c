 #include<stdio.h>
 
 int main()
 {
 	int num_conta, dig_verificador, c1, d1, u1, S1, S, c2, d2, u2, S2;
 	
 	printf("Cálculo do digito verificado de uma conta\n");
 	printf("\nNúmero da conta corrente (3 dígitos): ");
 	scanf("%d",&num_conta);
 	c1 = num_conta/100;
 	d1 = (num_conta%100)/10;
 	u1 = num_conta%10; 
 	S1 = u1*100 + d1*10 + c1;
 	printf("Número da conta invertido: %d\n",S1);
 	S = num_conta + S1;
 	printf("Soma do número da conta + seu inverso: %d\n",S);
 	c2 = (S/100)*1;
 	d2 = ((S%100)/10)*2;
 	u2 = (S%10)*3;
 	S2 = c2 + d2 + u2;
 	printf("Soma da multiplicação de cada dígito pela sua ordem posicional: %d\n",S2);
 	dig_verificador = S2%10;
 	printf("Dígito verificado: %d\n ", dig_verificador);
 
 	return 0;
 }
