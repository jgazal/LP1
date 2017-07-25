/* Desenvolva um algoritmo e um programa que leia dois números inteiros e mostre todos os números (inteiros) existentes entre eles. 
Desenvolva o algoritmo no campo de texto e faça o upload do código fonte em C.*/

//Portugol

inicio
 
    inteiro: x, y, i;
 
    escreva("1º número: ");
    leia(x);
    escreva("2º numero: ");
    leia(y);
    escreva("Números existentes entre", x, " e ", y);
    
    para i de x+1 até i<y passo 1 faça
        escreva(i);
    fimpara;
fim.

//---------------------------------------------------------------
//C

#include <stdio.h>

int main()

{
  int x, y, i;
  
  printf("1º número: "); 
  scanf("%d", &x);
  printf("2º numero: "); 
  scanf("%d", &y);
  printf("Números existentes entre %d e %d: \n",x,y);
  for(i=x+1; i<y; i++)
  {
    printf("%d\n",i);
  }

  return 0;
}
