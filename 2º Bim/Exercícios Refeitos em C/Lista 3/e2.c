//Lista de Exercícios 3 - Exercício 2

#include <stdio.h>

int main()
{
    float N1, N2, N3, Media;

    printf("Média de três notas\n");
    printf("1ª nota: ");
    scanf("%f",&N1);
    printf("2ª nota: ");
    scanf("%f",&N2);
    printf("3ª nota: ");
    scanf("%f",&N3);
    Media = (N1+N2+N3)/3;
    printf("Média das notas = %.1f\n",Media);

    return 0;
}
