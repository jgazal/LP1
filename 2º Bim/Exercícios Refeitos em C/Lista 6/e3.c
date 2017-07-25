//Lista de Exercícios 6 - Exercício 3

#include <stdio.h>

int main ()
{
    int A, B, Aux;
    
    printf("Troca de valores\n");
    printf("A = ");
    scanf("%d",&A);
    printf("B = ");
    scanf("%d",&B);
    Aux = A;
    A = B;
    B = Aux;
    printf("Valores trocados:\nA = %d\nB = %d\n",A,B);

    return 0;
}
