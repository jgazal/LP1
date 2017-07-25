/* Desenvolva um algoritmo e programa que receba duas notas de seis alunos, calcule e mostre:
A média aritmética das duas notas de cada aluno;
A mensagem que está na tabela a seguir:

Média aritmética	Mensagem
--------------------------------
Até 3               Reprovado
Entre 3 e 7         Exame
Acima de 7          Aprovado

O total de alunos aprovados;
O total de alunos de exame;
O total de alunos reprovados;
a média da classe. */

//Portugol
início

    real: N1, N2, MA;
    inteiro: i, AA, AE, AR;

      AA <- 0;
      AE <- 0;
      AR <- 0;
      para i de 1 até 6 passo 1 faça
        escreva("Aluno ");
        leia(i);
        escreva("Nota 1: ");
        leia(N1);
        escreva("Nota 2: ");
        leia(N2);
        MA <- (N1+N2)/2;
        escreva("Média: ", MA);

        se(MA <= 3) então
            escreva("Reprovado");
            AR <- AR+1;
        fimse;
        se((MA > 3) e (MA <= 7)) então;
            escreva("Exame");
            AE <- AE+1;
        fimse;
        se(MA > 7) então
            escreva("Aprovado");
            AA<-AA+1;
        fimse;
    fimpara;
    escreva("Total de alunos aprovados: ", AA);
    escreva("Total de alunos em exame: ", AE);
    escreva("Total de alunos reprovados: ", AR);
fim.
//-------------------------------------------------------------------

//C
#include <stdio.h>

int main()

{
    float N1, N2, MA;
    int i, AA=0, AE=0, AR=0;

    for(i=1; i<=6; i++)
    {
        printf("Aluno %d\n", i);
        printf("Nota 1: ");
        scanf("%f", &N1);
        printf("Nota 2: ");
        scanf("%f", &N2);
        MA = (N1+N2)/2;
        printf("Média: %.2f\n",MA);
        
        if(MA<=3)
        {
            printf("Reprovado\n");
            AR++;
        }
        else if(MA>3 && MA<=7)
        {
            printf("Exame\n");
            AE++;
        }
        else
        {
            printf("Aprovado\n");
            AA++;
        }
        printf("\n");
    }
    printf("Total de alunos aprovados: %d\n", AA);
    printf("Total de alunos em exame: %d\n", AE);
    printf("Total de alunos reprovados: %d\n", AR);


  return 0;
}



