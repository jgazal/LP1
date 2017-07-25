//Lista de Exercícios 10 - Exercício 12

#include <stdio.h>

int main ()
{
    int num_empregado, ano_nasc, ano_ingresso, ano_atual, idade, tempo_trabalho;

    printf("Aposentadoria de empregado\n");
    printf("Número do empregado: ");
    scanf("%d",&num_empregado);
    printf("Ano de Nascimento: ");
    scanf("%d",&ano_nasc);
    printf("Ano de Ingresso na empresa: ");
    scanf("%d",&ano_ingresso);
    printf("Ano atual: ");
    scanf("%d",&ano_atual);
    idade = ano_atual-ano_nasc;
    tempo_trabalho = ano_atual-ano_ingresso;
    printf("Idade: %d\n",idade);
    printf("Tempo de trabalho: %d\n",tempo_trabalho);
    if((idade>=65) || (tempo_trabalho>=30) || ((idade>=60) & (tempo_trabalho>=25)))
    {
        printf("Requer aposentadoria\n");    
    }
    else
    {
        printf("Não requer aposentadoria\n");
    }
}
