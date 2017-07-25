//Lista de Exercícios 6 - Exercício 8

#include <stdio.h>

int main()
{
    int horas, minutos, hm, tm,ms;
    
    printf("Conversão de Horas, Minutos e Segundos\n");
    printf("Horas: ");
    scanf("%d",&horas); 
    printf("Minutos: ");
    scanf("%d",&minutos);
    hm = horas*60;
    tm = minutos+hm;
    ms = tm*60;
    printf("Hora convertida para Minutos: %d\n",hm);
    printf("Total de Minutos: %d\n",tm);
    printf("Total de Minutos convertidos para Segundos: %d\n",ms);
    
   
    return 0;
}
