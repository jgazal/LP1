//Lista 25 Exercícios - Ex 16
//Compilar usando gcc ep16.c -lm -o ep16

#include <stdio.h>
#include <math.h>

int main()
{
    float hip, co, ca;
    
    printf("Cálculo da hipotenusa\n");
    printf("Digite o valor dos catetos:\n");
    printf("Cateto oposto: ");
    scanf("%f",&co);
    printf("Cateto adjacente: ");
    scanf("%f",&ca);
    hip = sqrt(pow(co,2)+pow(ca,2)); //sqrt = raíz quadrada. pow = potenciação
    printf("Hipotenusa = %.2f\n",hip);  
    
    return 0;
}
