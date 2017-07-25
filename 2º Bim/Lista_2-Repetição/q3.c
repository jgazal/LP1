#include <stdio.h>

int main() 
{
    int n=1;
    float soma, i;

    for (i=1; i<=50; i++) 
    {
        soma = soma + (n/i);
        n = n + 2;
    }
    printf("soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50\n");
    printf("\nsoma = %.1f\n", soma);
}
