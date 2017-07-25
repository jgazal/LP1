//Lista de Exercícios 3 - Exercício 8

#include <stdio.h>

int main()
{
    int i;
    
    printf("Programa para verificar a maioridade de uma pessoa\n");    
    printf("Idade: ");
    scanf("%d",&i);
    if(i>=18) {
        printf("Maior de idade\n");
    }
    else {
        printf("Menor de idade\n");
    }

    return 0;
}
