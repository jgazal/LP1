//Lista de Exercícios 3 - Exercício 9

#include <stdio.h>

int main()
{
    int senha;
    
    printf("Informe a senha: ");    
    scanf("%d",&senha);
    if(senha == 4531) {
        printf("Acesso permitido\n");
    }
    else {
        printf("Acesso negado\n");
    }

    return 0;
}
