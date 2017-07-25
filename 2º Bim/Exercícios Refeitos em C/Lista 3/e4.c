//Lista de Exercícios 3 - Exercício 4

#include <stdio.h>

int main()
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
    printf("Troca: A = %d  B = %d\n",A,B);    

    return 0;
}
