/* Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido. */

#include <stdio.h>
 
int main() {
 
    int N, H, M, S;
    
    scanf("%d",&N);
    H = N/3600;
    M = (N%3600)/60;
    S = (N%3600)%60;
    printf("%d:%d:%d\n",H,M,S);
 
    return 0;
}

