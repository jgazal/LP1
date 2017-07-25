/* Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma. */

#include <stdio.h>
 int main()
{
    int A, B, Pares=0, Impares=0, Positivos=0, Negativos=0;
    
    for(A=1; A<=5; A++)
    {
        scanf("%d", &B);
        if(B%2==0)
        {
            Pares++;
        } 
        if(B%2==1||B%2==-1)
        {
            Impares++;
        } 
        if(B>0)
        {
            Positivos++;
        } 
        if(B<0)
        {
            Negativos++;
        } 
    }
    printf("%d valor(es) par(es)\n",Pares);
    printf("%d valor(es) impar(es)\n",Impares);
    printf("%d valor(es) positivo(s)\n",Positivos);
    printf("%d valor(es) negativo(s)\n",Negativos);

    return 0;
}
