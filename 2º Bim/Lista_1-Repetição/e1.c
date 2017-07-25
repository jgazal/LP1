/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>

int main() 
{
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (chico >= ze) 
    {
        chico = chico + 0.02;
        ze = ze + 0.03;
        anos = anos + 1;
    }
    printf("Altura de Chico  = %.2f m\n", chico);
    printf("Altura de Zé = %.2f m\n", ze);
    printf("Serão necessários %d anos para que Chico seja maior que Zé.\n", anos);
}
