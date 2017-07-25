/* Escreva um algoritmo que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5 */

#include<stdio.h>

int main()
{
    int N=1000, i=0;

    while(i<5)
    {
        if(N%11==5)
        {
            i = i + 1;
        }
        N = N + 1;
    }
    printf("5º número maior que 1000, cuja divisão por 11 tem resto 5: %d\n", N);
        
    return 0;
}
