//Lista de Exercícios 4 - Exercício 9b
//Compilar usando gcc e9b.c -lm -o e9b

#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, delta;   
    
    printf("Cálculo do Delta\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    delta = pow(b,2)-4*a*c ;
    printf("Delta : %.2f\n",delta);


    return 0;
}
