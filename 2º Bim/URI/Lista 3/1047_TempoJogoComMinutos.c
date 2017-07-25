/* Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XX HORA(S) E YY MINUTO(S)”. */

#include <stdio.h>

int main()

{
    int HI, MI, HF, MF, duracaoH, duracaoM;
    
    scanf("%d %d %d %d",&HI, &MI, &HF, &MF);
    
    duracaoH = HF-HI;
    if(duracaoH<0)
    {
        duracaoH = 24+(HF-HI);
    }
    
    duracaoM = MF-MI;
    if(duracaoM<0)
    {
        duracaoM = 60+(MF-MI);
        duracaoH--;
    }

    if(HF==HI && MF==MI)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoM);
    }

    return 0;
}

