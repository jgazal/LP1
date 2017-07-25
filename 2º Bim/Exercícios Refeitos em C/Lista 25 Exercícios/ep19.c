//Lista 25 Exercícios - Ex 19

#include <stdio.h>

int main()
{
    float d1, d2, a, pot_ilum;
    int p = 18;
    
    printf("Iluminação de cômodos de uma casa\n");
    printf("Informe as dimensões do cômodo:\n");
    printf("Dimensão 1 = ");    
    scanf("%f",&d1);    
    printf("Dimensão 2 = ");    
    scanf("%f",&d2);
    a = d1*d2;
    pot_ilum = a*p;
    printf("Área do cômodo = %.2f m²\n",a);
    printf("Potência de iluminação = %.2f W\n",pot_ilum);

    return 0;
}
