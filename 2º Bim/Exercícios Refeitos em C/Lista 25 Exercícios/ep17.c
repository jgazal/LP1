//Lista 25 Exercícios - Ex 17
//Compilar usando gcc ep17.c -lm -o ep17

#include <stdio.h>
#include <math.h>

int main()
{
    float r, c, a, v;
    
    printf("Cáculo do comprimento, área e volume de uma esfera\n");
    printf("Digite o valor do raio: ");
    scanf("%f",&r);
    printf("Raio = %.2f\n",r);
    c = 2*3.14*r;       
    a = M_PI*pow(r,2);      //M_PI = constante Pi = 3,14159265358979323846
    v = 3.0/4*M_PI*pow(r,3);
    printf("Comprimento = %.2f\n",c);
    printf("Área = %.2f\n",a);
    printf("Volume = %.2f\n",v);
    
    return 0;
}
