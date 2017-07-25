/* Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado. */

/*#include<stdio.h>

int main()
{
    int N1, N2, N3;
    
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1<N2 && N1<N3)
    {
        if(N2<N3)
        {
            printf("%d\n%d\n%d\n",N1,N2,N3);
        }
        else
        {
            printf("%d\n%d\n%d\n",N1,N3,N2);
        }
            printf("\n%d\n%d\n%d\n",N1,N2,N3);
    }
    else if(N2<N1 && N2<N3)
    {
        if(N1<N3)
        {
            printf("%d\n%d\n%d\n",N2,N1,N3);
        }
        else
        {
            printf("%d\n%d\n%d\n",N2,N3,N2);      
        }
            printf("\n%d\n%d\n%d\n",N1,N2,N3);
    }
    else if(N3<N1 && N3<N2)
    {
        if(N1<N2)
        {
            printf("%d\n%d\n%d\n",N3,N1,N2);
        }
        else
        {
            printf("%d\n%d\n%d\n", N3,N2,N1);
        }
            printf("\n%d\n%d\n%d\n",N1,N2,N3);
    }
    
    return 0;
} */



#include <stdio.h>

int main()
{
    int N1, N2, N3, A1, A2, A3, Aux;

    scanf("%d %d %d", &N1, &N2, &N3);
    A1 = N1;
    A2 = N2;
    A3 = N3;
    if (A1<A2)
    {
        Aux = A1;
        A1 = A2;
        A2 = Aux;
    }
    if (A2<A3)
    {
        Aux = A2;
        A2 = A3;
        A3 = Aux;
    }
    if (A1<A2)
    {
        Aux = A1;
        A1 = A2;
        A2 = Aux;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",A3,A2,A1,N1,N2,N3);

    return 0;

}

