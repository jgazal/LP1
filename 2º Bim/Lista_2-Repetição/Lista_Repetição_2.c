//Questão 1
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
//---------------------------------------------------------------------------
//Questão 2
#include<stdio.h>

int main()
{
    float n, i;
    char op;

    printf("Tabuda\n");
    printf("======\n");
    printf("Informe o número: ");
    scanf("%f", &n);
    printf("\nSoma\n");
    printf("--------------\n");
    for(i=1; i<=10; i++)
        printf("%.0f + %.0f = %.0f\n", i, n, i+n);
    printf("\nSubtração\n");
    printf("--------------\n");
    for(i=1; i<=10; i++)   
        printf("%.0f - %.0f = %.0f\n", i, n, i-n);
    printf("\nMultiplicação\n");
    printf("--------------\n");
    for(i=1; i<=10; i++)
        printf("%.0f * %.0f = %.0f\n", i, n, i*n);
    printf("\nDivisão\n");
    printf("--------------\n");
    for(i=1; i<=10; i++)
        printf("%.0f / %.0f = %.1f\n", i, n, i/n);

    return 0;
}
//---------------------------------------------------------------------------
//Questão 3
#include <stdio.h>

int main() 
{
    int n=1;
    float soma, i;

    for (i=1; i<=50; i++) 
    {
        soma = soma + (n/i);
        n = n + 2;
    }
    printf("soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50\n");
    printf("\nsoma = %.1f\n", soma);
}
//---------------------------------------------------------------------------
//Questão 4
#include<stdio.h>

int main()
{
    int n, produto=1;

    printf("Números: \n"); 
    do{
        scanf("%d", &n); 
        if(n>0)
        {
            produto = produto * n;
        }      
    }while(n!=0); 
    printf("Produto dos números digitados: %d\n", produto);

    return 0;
}
//---------------------------------------------------------------------------
//Questão 5
#include <stdio.h>

int main() 
{

    int n, i, n1=1, n2=1, s;

    printf("Sequência de n números: ");
    scanf("%d", &n);
    printf("%d\t", n1);
    printf("%d\t", n2);
    for(i=3; i<=n; i++) 
    {
        s = n1 + n2;
        printf("%d\t", s);
        n1 = n2;	
        n2 = s; 
    }
    return 0;
}
//---------------------------------------------------------------------------
//Questão 6a - FOR
#include<stdio.h>

int main()
{
    int i;

    for(i=100; i<=400; i++)
    {
        if(i%4==0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
//---------------------------------------------------------------------------
//Questão 6a - WHILE
#include<stdio.h>

int main()
{
    int i=100;

    while(i>=100 && i<=400)
    {
        if(i%4==0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
//---------------------------------------------------------------------------
//Questão 6b - FOR
#include<stdio.h>

int main()
{
    int n, i, soma=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n>1)
    {
        for(i=1; i<=n; i++)
        {
            if(i%5==0)
            {
                printf("%d\n", i);
                soma = soma + i;
            }            
        }
    }
    printf("Soma dos múltimplos de 5 no internalo de 1 a n: %d\n", soma);


    return 0;
}
//---------------------------------------------------------------------------
//Questão 6b - WHILE
#include<stdio.h>

int main()
{
    int n, i=1, soma=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n>1)
    {
        while(i>0 && i<=n)
        {
            if(i%5==0)
            {
                printf ("%d\n", i);
                soma = soma + i;
            }
            i++;            
        }
    }
    printf("Soma dos múltimplos de 5 no internalo de 1 a %d: %d\n", n, soma);


    return 0;
}
//---------------------------------------------------------------------------
//Questão 7
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int op, qtd;
    float valor, conta=0.0;

    do{
    system("clear");   
    printf("=============MENU=============\n");
    printf("[1] Cachorro quente - R$1,50\n");
    printf("[2] Hamburguer - R$2,00\n");
    printf("[3] Cheeseburger - R$2,50\n");
    printf("[4] Eggcheeseburger - R$3,00\n");
    printf("[5] Refrigerante - R$1,50\n");
    printf("[6] CONTA\n");
    printf("[7] SAIR\n");
    printf("\nOpção: ");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            system("clear"); 
            printf("\nCachorro quente\n");
            printf("---------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*1.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 2:
            system("clear"); 
            printf("\nHamburguer\n");
            printf("----------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*2.00;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 3:
            system("clear"); 
            printf("\nCheeseburguer\n");
            printf("-------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*2.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 4:
            system("clear"); 
            printf("\nEggcheeseburguer\n");
            printf("----------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*3.00;
            printf("Valor: R$%.2f", valor);
            conta = conta + valor;
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 5:
            system("clear"); 
            printf("\nRefrigerante\n");
            printf("------------\n");
            printf("Quantidade: ");
            scanf("%d", &qtd);
            valor = qtd*1.50;
            printf("Valor: R$%.2f\n", valor);
            conta = conta + valor;  
            printf("\n0 - Voltar\n");
            scanf("%d", &op);
        break;
        case 6:
            system("clear"); 
            printf("Total do pedido: R$%.2f\n", conta);  
            printf("\n0 - Voltar\n");
            scanf("%d", &op);    
        break;
        default: printf("Valor inválido\n");
    } 
    }while(op!=7); 

    return 0;
}
//---------------------------------------------------------------------------
//Questão 8
#include<stdio.h>

int main()
{
    int x, y, i, p=1;

    printf("1º Número: ");
    scanf("%d", &x);
    printf("2º Número: ");
    scanf("%d", &y);
    for(i=1; i<=y; i++)
    {
        p = p * x;     
    }
    printf("%d ^ %d = %d\n", x, y, p); 

    return 0;
}
//---------------------------------------------------------------------------
//Questão 9
#include <stdio.h>
 
int main()
{
    float divida=10000, juros=0.025, aplicacao=1500, rendimento=0.04;
    int meses=0;
 
    while(divida>aplicacao) 
    {
        divida = divida + (divida * juros);
        aplicacao = aplicacao + (aplicacao * rendimento);
        meses++;
    }
    printf("Quantidade de meses para pagar a divida: %d\n", meses);
 
    return 0;
}
//---------------------------------------------------------------------------
//Questão 10
#include<stdio.h>

int main()
{
    int A=0, B=0, C=0, M=0, V=0, N=0, moradores, pAM=0, pAV=0, pAN=0, pBM=0, pBV=0, pBN=0, pCM=0, pCV=0, pCN=0, spA, spB, spC;
    char periodo, elevador, freq_elevador, fluxo_periodo;

    for(moradores=1; moradores<=50; moradores++)
    {
        printf("Morador: %d\n", moradores);
        printf("Elevador mais utilizado (A, B, C): \n");
        scanf("%s", &elevador);
        switch(elevador)
        {
            case 'A': A = A + 1; break;
            case 'B': B = B + 1; break;
            case 'C': C = C + 1; break;
        }
        if((A>B) && (A>C))
        {
            freq_elevador = 'A';
        }
        else if((B>A) && (B>C))
        {
            freq_elevador = 'B';
        }
        else
        {
            freq_elevador = 'C';
        }

        printf("Período que utiliza o elevador (M, V, N): \n");
        scanf("%s", &periodo);
        switch(periodo)
        {
            case 'M': M = M + 1; break;
            case 'V': V = V + 1; break;
            case 'N': N = N + 1; break;
        }
        if((M>V) && (M>N))
        {
            fluxo_periodo = 'M';
        }
        else if((V>M) && (V>N))
        {
            fluxo_periodo = 'V';
        }
        else
        {
            fluxo_periodo = 'N';    
        }

        if(elevador=='A')
        {
            if(periodo=='M')
            {
                pAM = pAM+1;            
            }
            else if(periodo=='V')
            {
                pAV = pAV+1;
            }
            else
            {
                pAN = pAN+1;
            }
        }
        else if(elevador=='B')
        {
            if(periodo=='M')
            {
                pBM = pBM+1;            
            }
            else if(periodo=='V')
            {
                pBV = pBV+1;
            }
            else
            {
                pBN = pBN+1;
            }
        }
        else if(elevador=='C')
        {
            if(periodo=='M')
            {
                pCM = pCM+1;            
            }
            else if(periodo=='V')
            {
                pCV = pCV+1;
            }
            else
            {
                pCN = pCN+1;
            }
        }    
    }
        spA = pAM+pAV+pAN;
        spB = pBM+pBV+pBN;
        spC = pCM+pCV+pCN;
        if((spA > spB) && (spA>spC))
        {
            printf("O elevador A é o mais frequentado no período da ");
            if((pAM>pAV) && (pAM>pAN))
            {
                printf("manhã\n");
            }
            else if((pAV>pAM) && (pAV>pAN))
            {
                printf("tarde\n");
            }
            else
            {
                printf("noturno\n");
            }
        }
        else if((spB > spA) && (spB>spC))
        {
            printf("O elevador B é o mais frequentado no período da ");
            if((pBM>pBV) && (pBM>pBN))
            {
                printf("manhã\n");
            }
            else if((pBV>pBM) && (pBV>pBN))
            {
                printf("tarde\n");
            }
            else
            {
                printf("noturno\n");
            }
        }
        else if((spC > spA) && (spC>spB))
        {
            printf("O elevador C é o mais frequentado no período da ");
            if((pCM>pCV) && (pCM>pCN))
            {
                printf("manhã\n");
            }
            else if((pCV>pCM) && (pCV>pCN))
            {
                printf("tarde\n");
            }
            else
            {
                printf("noturno\n");
            }
        } 
    printf("Elevador mais utilizado: %c\n", freq_elevador);
    printf("Período com maior fluxo: %c\n", fluxo_periodo);

    return 0;
}
//---------------------------------------------------------------------------
//Questão 11
#include<stdio.h>

int main()
{
    int ano_nasc, procedencia, idade, ano_atual=2017, mulheres_capital=0, maior60=0, mulher_mais60=0, n;
    float i=1, menor21=0, porcentagem_menos21;
    char sexo;

    do
    {
        printf("\nMotorista nº: ");
        scanf("%d", &n);
        if(n>0)
        {
        printf("Ano de nascimento: ");
        scanf("%d", &ano_nasc);
        idade = ano_atual - ano_nasc;
        printf("Sexo (M- Masculino | F- Feminino): ");
        scanf("%s", &sexo);
        printf("Procedência (0- Capital | 1- Interior | 2- Outro Estado): ");
        scanf("%d", &procedencia);
        if(idade<21)
        {
            menor21 = menor21 + 1;                       
        }
        if(((sexo=='F') || (sexo=='f')) && procedencia==0)
        {
            mulheres_capital = mulheres_capital + 1;                      
        }
        if((idade>60) && procedencia==1)
        {
            maior60 = maior60 + 1;
        }
        if(((sexo=='F') || (sexo=='f')) && idade>60)
        {
            mulher_mais60 = mulher_mais60 + 1;                        
        }
        i++;
        }
    }while(n!=0);
    porcentagem_menos21 = i/menor21;
    printf("\nPorcentagem de motoristas com menos de 21 anos: %.1f\n", porcentagem_menos21);
    printf("Quantidade de mulheres da capital: %d\n", mulheres_capital);
    printf("Motoristas do interior do estado com idade maior que 60: %d\n", maior60);
    printf("Quantidade de mulheres com mais de 60 anos: %d\n", mulher_mais60);

    return 0;
}
//---------------------------------------------------------------------------
//Questão 12
#include<stdio.h>

int main()
{
    int i, codigo, diarias, valor_diaria=300, valor_pagar, total_ganho=0, total_diarias=0;

    for(i=1; i<=5; i++)
    {
        printf("\nCódigo: ");
        scanf("%d", &codigo);
        printf("Número de diárias: ");
        scanf("%d", &diarias);
        total_diarias = total_diarias + diarias;
        if(diarias<15)
        {
            valor_pagar = valor_diaria + 20;
            printf("Valor a pagar: R$%d", valor_pagar); 
            total_ganho = total_ganho + valor_pagar;         
        }
        if(diarias==15)
        {
            valor_pagar = valor_diaria + 14;     
            printf("Valor a pagar: R$%d", valor_pagar); 
            total_ganho = total_ganho + valor_pagar;           
        }
        if(diarias>15)
        {
            valor_pagar = valor_diaria + 12;   
            printf("Valor a pagar: R$%d", valor_pagar);  
            total_ganho = total_ganho + valor_pagar;             
        }
        printf("\n");    
    }
    printf("\n__________________________________________\n");
    printf("\nTotal ganho pelo hotel: R$%d\n",total_ganho);
    printf("Número total de diárias: %d\n", total_diarias );

    return 0;
}
//---------------------------------------------------------------------------
//Questão 13
#include<stdio.h>

int main()
{

    int cod_item, qtd, cont;
    float preco, custo_item, total_pagar=0, valor_recebido, troco;

    do
    {    
        do
        {    
            printf("\nCódigo: ");
            scanf("%d", &cod_item);
            printf("Quantidade: ");
            scanf("%d", &qtd);
            printf("Preço: R$");
            scanf("%f", &preco);
            custo_item = qtd*preco;
            total_pagar = total_pagar + custo_item;
            printf("Custo do item: R$%.2f", custo_item);
            printf("\n");
        }while(cod_item!=0);

        printf("\nTotal a pagar: R$%.2f\n", total_pagar);
        printf("Valor recebido: R$");
        scanf("%f", &valor_recebido);
        if(valor_recebido>total_pagar)
        {
            troco = valor_recebido - total_pagar;
            printf("Troco: R$%.2f\n", troco);        
        }
        printf("Deseja continuar? (1- Sim | 2- Não) ");
        scanf("%d", &cont);    
    }while(cont!=2);
    
    return 0;
}
