//Lista de Exercícios 3 - Exercício 10

#include <stdio.h>

int main()
{
    float N1, N2, Media;
    
    printf("Média das notas\n");    
    printf("1ª Nota: ");
    scanf("%f",&N1);
    printf("2ª Nota: ");    
    scanf("%f",&N2);
    Media = (N1+N2)/2;
    printf("Média: %.1f\n",Media);

    if(Media >= 5.0) {
        printf("Aluno Aprovado\n");
    }
    else {
        printf("Aluno Reprovado\n");
    }

    return 0;
}
