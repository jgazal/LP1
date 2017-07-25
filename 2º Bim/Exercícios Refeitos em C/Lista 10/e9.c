//Lista de Exercícios 10 - Exercício 9
//Compilar usando gcc e9.c -lm -o e9

#include <stdio.h>
#include <math.h>

int main ()
{
    int operacao; 
    float Soma, Raiz, Cubo, Diferenca, N1, N2;

    printf("Operações\n");
    printf("Escolha uma opção do menu:\n1-Somar dois números\n2-Raíz quadrada de um número\n3-O cubo de um número\n4-Diferença do maior pelo menor\nOPÇÃO:");
    scanf("%d",&operacao);
            
    switch(operacao)
    {
        case 1:
            printf("1º número: ");
            scanf("%f",&N1);
            printf("2º número: ");
            scanf("%f",&N2);
            Soma = N1+N2;
            printf("A soma de %.0f+%.0f = %.0f\n",N1,N2,Soma);
        break;

        case 2:
            printf("Digite um número: ");
            scanf("%f",&N1);
            Raiz = sqrt(N1);
            printf("A raíz quadrada de %.0f = %.0f\n",N1,Raiz);
        break;

        case 3:
            printf("Digite um número: ");
            scanf("%f",&N1);
            Cubo = pow(N1,3);
            printf("O cubo do número %.0f = %.0f\n",N1,Cubo);
        break;   

        case 4:
            printf("1º número: ");
            scanf("%f",&N1);
            printf("2º Número: ");
            scanf("%f",&N2);
            if(N1 > N2)
            {
                Diferenca = N1-N2;
                printf("A diferença entre %.0f-%.0f = %.0f\n",N1,N2,Diferenca);
            }
            else
            {
                Diferenca = N2-N1;
                printf("A diferença entre %.0f-%.0f = %.0f\n",N2,N1,Diferenca);
            }
        break;  
        
        default:
            printf("Inválido\n");  
    }    
        
    return 0;
}
