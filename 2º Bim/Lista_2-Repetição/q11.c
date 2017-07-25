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
