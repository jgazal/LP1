/* Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal. */

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO = (A*C)/2;
    CIRCULO = 3.14159*pow(C,2);
    TRAPEZIO = ((A+B)*C)/2;
    QUADRADO = B*B;
    RETANGULO = A*B;
    printf("TRIANGULO: %.3f\n",TRIANGULO);
    printf("CIRCULO: %.3f\n",CIRCULO);
    printf("TRAPEZIO: %.3f\n",TRAPEZIO);
    printf("QUADRADO: %.3f\n",QUADRADO);
    printf("RETANGULO: %.3f\n",RETANGULO);
    
    return 0;
}
