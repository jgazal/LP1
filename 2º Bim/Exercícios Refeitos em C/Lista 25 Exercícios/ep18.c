//Lista 25 Exercícios - Ex 18

#include <stdio.h>

int main()
{
    float c, f;

    printf("Conversão de graus Celsius para Fahrenheit\n");
    printf("Temperatura em graus Celsius: ");
    scanf("%f",&c);
    f = (180*(c+32))/100;
    printf("Temperatura em Fahrenheit: %.2f\n",f);

    return 0;
}
