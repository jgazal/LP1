//Lista de Exercícios 6 - Exercício 4

#include <stdio.h>

int main ()
{
    float s, h, m;
    
    printf("Conversão de sugundos para Horas e Minutos\n");
    printf("Segundos: ");
    scanf("%f",&s);
    h = s/3600;
    m = s/60;
    printf("Conversão de Segundos para Horas: %.2f\n",h);
    printf("Conversão de Segundos para Minutos: %.2f\n",m);

    return 0;
}
