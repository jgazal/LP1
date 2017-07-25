//Lista 25 Exercícios - Ex 23

#include <stdio.h>

int main()
{
    float a1, a2, a3;    
   
    printf("Cálculo da medida do terceiro ângulo de um triângulo\n");
    printf("Ângulo 1 = ");
    scanf("%f",&a1);
    printf("Ângulo 2 = ");
    scanf("%f",&a2);
    a3 = 180-(a1+a2);
    printf("Ângulo 3 = %.2f\n",a3);    

    return 0;
}
