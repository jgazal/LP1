//Lista de Exercícios 10 - Exercício 1

#include <stdio.h>

int main ()
{
    int senha;

    printf("Validação de Senha\n");
    printf("Digite a senha: ");
    scanf("%d",&senha);
    if(senha == 4531)
    {
        printf("Acesso permitido\n");
    }
    else
    {
        printf("Acesso negado\n");
    }

    return 0;
}
