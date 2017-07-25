/*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade e salário. Faça um algoritmo e programa que calcule e mostre:
    A média de salário dos habitantes;
    A menor idade do grupo;
Finalize a entrada de dados ao ser informada uma idade negativa. */

//Portugol
início

  inteiro: idade, menor;
  real: salario, media_sal, cont_sal = 0, cont;
 
    repita
        escreva("Idade: ");
        leia(idade);
        escreva("Salário: R$");
        leia(salario);

        se(idade > 0) então
            cont <- cont + 1;
            cont_sal <- cont_sal + salario;
            se(idade < menor) então
                menor = idade;
            fimse;
        fimse;
    até idade > 0;
    
    media_sal <- cont_sal/cont;
    escreva("Média de salário dos habitantes: ",media_sal);
    escreva("Menor idade do grupo: ",menor);
fim.
//---------------------------------------------------------------------
//C

#include <stdio.h>

int main()

{
  int idade, menor;
  float salario, media_sal, cont_sal = 0, cont;
  
  do
  {
    printf("Idade: ");
    scanf("%d",&idade);
    printf("Salário: R$");
    scanf("%f",&salario);
    
    if(idade > 0)    
    {
    cont++;
    cont_sal = cont_sal + salario; 

    if(idade < menor)
    {
        menor = idade;
    }  
    }  

  }while(idade > 0);
    
    media_sal = cont_sal/cont;
    printf("Média de salário dos habitantes: %.2f\n",media_sal);
    printf("Menor idade do grupo: %d\n",menor);

    return 0;
}



