//Lista 25 Exercícios - Ex 4

#include <stdio.h>

int main()
{
    float N1, N2, mp;

    printf("Média ponderada de notas\n");    
    printf("Escreva as duas notas\n");
    scanf("%f %f",&N1,&N2);
    printf("1ª nota: %.1f\n", N1);
    printf("2ª nota: %.1f\n", N2);
    mp = (N1*2 + N2*3)/5;
    printf("A média ponderada das notas = %.1f\n ", mp);

    return 0;
}
