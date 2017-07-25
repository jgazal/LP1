//Lista 25 Exercícios - Ex 20
//Compilar usando gcc ep20.c -lm -o ep20

#include <stdio.h>
#include <math.h>

int main()
{
    float a, d, e, radi;
    
    printf("Cálculo da medida de uma escada apoiada na parede\n");
    printf("Ângulo formado pela escada apoiada no chão = ");
    scanf("%f",&a);
    printf("Distância da escada para a parede = ");
    scanf("%f",&d);
    radi = (a*M_PI)/180;
    e = d/sin(radi);
    printf("Medida da escada = %.2f\n",e);

    return 0;
}
