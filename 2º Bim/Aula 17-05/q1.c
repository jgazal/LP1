/*Qual a saída produzida pela execução do programa seguinte? Analise o resultado e apresente a interpretação das três componentes presentes no laço for em sua resposta. */

#include<stdio.h>

 

int main(){
     int i;
     for(printf("Inicializacao\n"),i=0;
          printf("Teste i=%d\n",i),i<5;
          printf("Incremento\n"),i++);
     printf("FORA DO LACO for\n");
     return 0;
}

/*
Saída
------

Inicializacao
Teste i=0
Incremento
Teste i=1
Incremento
Teste i=2
Incremento
Teste i=3
Incremento
Teste i=4
Incremento
Teste i=5
FORA DO LACO for

A cada interação, das 5 que irá realizar, i é incrementado e é mostrado o seu valor.
OBS: Foi colocado incorretamente um ponto-e-vírgula após o for. */

