/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo. */

#include<stdio.h>

int main()
{
    int hora_inicio, hora_fim, duracao;
    
    scanf("%d %d",&hora_inicio, &hora_fim);
    if(hora_inicio==hora_fim)
    {
        duracao = 24-hora_inicio+hora_fim;
        printf("O JOGO DUROU %d HORA(S)\n",duracao);
    }
    else if(hora_inicio<=hora_fim)
    {   
        duracao = hora_fim-hora_inicio;
        printf ("O JOGO DUROU %d HORA(S)\n",duracao);
    }
    else
    {
        duracao = 24-hora_inicio+hora_fim;
        printf("O JOGO DUROU %d HORA(S)\n",duracao);
    }

    return 0;
}
