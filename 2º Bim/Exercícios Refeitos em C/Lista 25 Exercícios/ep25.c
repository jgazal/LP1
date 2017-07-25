//Lista 25 Exercícios - Ex 25

#include <stdio.h>

int main()
{
    int h, m, h_conv_min, total_min, tm_conv_seg;
    
    printf("Conversão de horas\n");
    printf("Hora: ");
    scanf("%d",&h);
    printf("Minutos: ");
    scanf("%d",&m);
    h_conv_min = h*60;
    total_min = m+h_conv_min;
    tm_conv_seg = total_min*60;
    printf("Hora convertida em Minutos: %d\n",h_conv_min);
    printf("Total dos Minutos: %d\n",total_min);       
    printf("Total dos Minutos convertidos para Segundos: %d\n",tm_conv_seg);    

    return 0;
}
