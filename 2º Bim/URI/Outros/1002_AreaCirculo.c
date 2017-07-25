/* A fórmula para calcular a área de uma circunferência é: area = π . raio². Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error". */

#include<stdio.h>
#include<math.h>

int main()
{
    double raio, area;
    double n = 3.14159;

    scanf("%lf",&raio);
    area = n*pow(raio,2);
    printf("A=%.4lf\n",area);

    return 0;
}
