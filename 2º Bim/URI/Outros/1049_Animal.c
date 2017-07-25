/* Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas. 

Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.*/


#include<stdio.h>
#include<string.h>

int main()
{
    char resposta1[50];
    char resposta2[50];
    char resposta3[50];

    scanf("%s %s %s",resposta1,resposta2,resposta3);
    if(strcmp(resposta1,"vertebrado")==0)
    {   
        if(strcmp(resposta2,"ave")==0)
        {    
            if(strcmp(resposta3,"carnivoro")==0)
            {     
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(resposta2,"mamifero")==0)
        {
            if(strcmp(resposta3,"onivoro")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(resposta1,"invertebrado")==0)
    {
        if(strcmp(resposta2,"inseto")==0)
        {
            if(strcmp(resposta3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp(resposta2,"anelideo")==0)
        {
            if(strcmp(resposta3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
