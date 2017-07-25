/* Para o programa abaixo determine o número total de itens impressos. Determine também o primeiro e o último número impresso.
Como seria afetada a saída se os dois comandos dentro do while composto fossem invertidos (isto é, se a chamada de printf() fosse feita antes do comando 
num++)? */

#include <stdio.h>

int main()
{
  int num = 0;

  while (num < 20)
  {
     num++;
     printf("\n%d ", num);
  }

  return 0;
}

/*
Saída
------
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20

 

Número total de itens impressos: 20

Primeiro número impresso: 1

Último número impresso: 20

 

Se a chamada de printf() fosse feita antes do comando num++ seria mostrada a saída abaixo:

Saída
------
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19

Será mostrado primeiro o valor 0 pois num é impresso antes de ser incrementado. */
