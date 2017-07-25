#include<stdio.h>

int main()
{
    char nome, nome_maior_estoque;
    int qtd_produzida, qtd_vendida, estoque, maior_estoque=0;

    printf("===Fábrica===\n");    
    while(nome!='!')
    {
        printf("\nNome: ");
        scanf(" %s", &nome);
        printf("Quantidade Produzida: ");
        scanf("%d", &qtd_produzida);
        printf("Quantidade Vendida: ");
        scanf("%d", &qtd_vendida);
        estoque = qtd_produzida - qtd_vendida;
        printf("\nNome: %s\n", &nome);
        printf("Estoque: %d\n", estoque);
        if(estoque<50)
        {
            printf("Estoque baixo\n");
        }
        if(estoque>maior_estoque)
        {
            maior_estoque = estoque;
            nome_maior_estoque = nome;
        }
    }
    printf("\nProduto com maior estoque: %s - Quantidade: %d\n", &nome_maior_estoque, maior_estoque);
 
    return 0;
}
