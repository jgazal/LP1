/* Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
MaiorAB = (a+b+abs(a-b))/2

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior". */

#include <stdio.h>
 
int main() {
 
    int a, b, c, MaiorABC;
    
    scanf("%d %d %d", &a, &b, &c);
    MaiorABC = (a+b+abs(a-b))/2;
    MaiorABC = (MaiorABC+c+abs(MaiorABC-c))/2;
    printf("%d eh o maior\n", MaiorABC);
    
    return 0;
}
