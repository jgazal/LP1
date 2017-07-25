//Lista de Exercícios 10 - Exercício 6

#include <stdio.h>

int main ()
{
    int A, B;
    
    printf("Número divisível\n");
    printf("1º número: ");    
    scanf("%d",&A);
    printf("2º número: ");
    scanf("%d",&B);
    if(A%B == 0)
    {
        printf("Divisível\n");
    }
    else if (B == 0)
    {
        printf("Não divisível\n");
    }
    else
    {
        printf("Não divisível\n");
    }
    
    return 0;
}
