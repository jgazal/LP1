//Lista de Exercícios 6 - Exercício 6
//Compilar usando gcc e6.c -lm -o e6

#include <stdio.h>
#include <math.h>

int main ()
{
    float i, P, n, Rendimento;

    printf("Cálculo de rendimento de poupança\n");
    printf("Taxa: ");
    scanf("%f",&i);
    printf("Aplicação mensal: R$");
    scanf("%f",&P);
    printf("Número de meses: ");
    scanf("%f",&n);
    Rendimento = P*(pow(1+i,n)-1)/i;
    printf("Rendimento: R$%.2f\n",Rendimento);

    return 0;
}
