//Lista avaliativa 1º Bim - Exercício 3

#include <stdio.h>

int main()
{
    float A, G, Ra, Rg;

    printf("Economia de combustível de Frota de Taxi\n");
    printf("Preço/litro Álcool: R$");
    scanf("%f",&A);
    printf("Preço/litro Gasolina: R$");
    scanf("%f",&G);
    printf("Rendimento (Km/l) com Álcool: ");
    scanf("%f",&Ra);
    printf("Rendimento (Km/l) com Gasolina: ");
    scanf("%f",&Rg);
    if((A>=0.01) & (A<=10.00) & (G>=0.01) & (G<=10.00) & (Ra>=0.01) & (Ra<=20.00) & (Rg>=0.01) & (Rg<=20.00))
    {
        if(A/Ra >= G/Rg)
        {
            printf("G\n");
        }
        else
        {
            printf("A\n");
        }
    }
    else
    {
        printf("Valores inválidos\n");
    } 
}
