//Lista de Exercícios 3 - Exercício 7

#include <stdio.h>

int main()
{
    int bit, b50, b10, b5, b1;
    
    printf("Quantidade de Bits desejados: ");
    scanf("%d",&bit);
    b50 = bit/50;
    b10 = (bit%50)/10;
    b5 = ((bit%50)%10)/5;
    b1 = ((bit%50)%10)%5;
    printf("Notas de 50: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 1: %d\n",b50,b10,b5,b1);

    return 0;
}
