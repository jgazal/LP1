//Lista de Exercícios 4 - Exercício 9a

#include <stdio.h>

int main ()
{
    float a, c, h;    
    
    printf("Área do retângulo\n");
    printf("Comprimento: ");
    scanf("%f",&c);
    printf("Altura: ");
    scanf("%f",&h);
    a = c*h;
    printf("Área: %.2f\n",a);

    return 0;
}
