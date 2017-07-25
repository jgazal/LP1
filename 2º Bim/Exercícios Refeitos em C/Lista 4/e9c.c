//Lista de Exercícios 4 - Exercício 9c

#include <stdio.h>

int main ()
{
    char nome;
    int i, data_nasc, data_atual;   
    
    printf("Nome: ");
    scanf("%s",&nome);
    printf("Data de Nascimento: ");
    scanf("%d",&data_nasc);
    printf("Data Atual: ");
    scanf("%d",&data_atual);
    i = data_atual-data_nasc;
    printf("Idade: %d\n",i);
    
    return 0;
}
