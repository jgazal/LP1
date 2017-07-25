//Lista 25 Exercícios - Ex 14

#include <stdio.h>

int main()
{
   int ano_nasc, ano_atual, ia, im, id, is;

    printf("Digite seu ano de nascimento e o ano atual\n");    
    scanf("%d %d",&ano_nasc,&ano_atual);
    printf("Ano de nascimento: %d\n",ano_nasc);
    printf("Ano atual: %d\n",ano_atual);
    ia = ano_atual-ano_nasc;
    im = ia*12;
    id = im*365;
    is = id/7;
    printf("Idade em anos = %d\n",ia);
    printf("Idade em meses = %d\n",im);
    printf("Idade em dias = %d\n",id);
    printf("Idade em semanas = %d\n",is);

    return 0;
}
