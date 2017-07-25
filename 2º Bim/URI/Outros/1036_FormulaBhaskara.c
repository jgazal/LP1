/* Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem. */

#include <stdio.h>
 
int main() {
 
    double A, B, C, R1, R2, x;

    scanf("%lf %lf %lf",&A,&B,&C);
    x = pow(B,2)-4*A*C; 
    R1 = (-B + sqrt(x))/(2*A); 
    R2 = (-B - sqrt(x))/(2*A);
    
    
    if((A==0) || (x<0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
 
    return 0;
}

