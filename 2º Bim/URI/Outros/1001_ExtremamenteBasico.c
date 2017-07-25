/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Entrada
A entrada contém 2 valores inteiros.

Saída
Imprima a variável X conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Obs: O X está em maiúsculo e deve ter um espaço antes e um espaço depois do sinal de igualdade. */

#include <stdio.h>
 
int main() {
 
    int A, B, X;
    
    scanf("%d %d",&A, &B);
    X = A + B;
    printf("X = %d\n",X);
 
    return 0;
}

