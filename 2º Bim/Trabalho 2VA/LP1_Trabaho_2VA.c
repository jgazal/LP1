#include<stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, op, cpf_gerente, senha_gerente, cpf_cliente, senha_cliente, cod_agencia, ag,  num_conta, conta,  tipo_conta, senha, senha_admin=123456, qtd_dep_cheque=0, erro_senha, criptografia_senha_gerente, criptografia_senha_cliente, resp, tipo_poupanca=0, tipo_cc=0, tipo_cs=0;
    char nome_gerente[50], data_nasc_gerente[50], username_gerente[50], nome_cliente[50], data_nasc_cliente[50], username_cliente[50], nome_agencia[50]; 
    float conta_poupanca=0, conta_corrente=0, conta_salario=0, cheque, dinheiro, saque, total_dep_cheque=0, total_dep_dinheiro=0, limite, limite_utilizado, juros, total_juros=0, limite_utlizado=0;

    do{
        system("clear");
        printf("__________________________\n");
        printf("==========================\n");
        printf("  BANCO LP1 - ANÁPOLIS/GO \n");
        printf("==========================\n");
        printf("__________________________\n");
        printf("\n           MENU           \n");
        printf("__________________________\n");
        printf("\n1- Registro de Usuário\n");
        printf("2- Cadastro de Conta\n");
        printf("3- Movimentação Bancária\n");
        printf("4- Saldo\n");
        printf("5- Juros debitados\n");
        printf("6- Relatório Gerencial\n");
        printf("7- Sair\n");
        printf("__________________________\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);
        system("clear");

        switch(opcao)
        {
            case 1:
                do{ 
                    system("clear");            
                    printf("\n   Registro de Usuário   \n");
                    printf("__________________________\n");
                    printf("\n1- Gerente\n");
                    printf("2- Cliente\n");
                    printf("3- Voltar para o Menu\n");
                    printf("__________________________\n");
                    printf("\nOpção: ");
                    scanf("%d", &opcao);
                    switch(opcao)
                    {
                        case 1:
                            printf("__________________________\n");
                            printf("\nSenha de Administrador: ");
                            scanf("%d", &senha);
                            if(senha==senha_admin)
                            {
                                system("clear");
                                printf("\n         Registro - Gerente         \n");
                                printf("______________________________________\n");
                                printf("\nNome: ");
                                scanf(" %[^\n]s",nome_gerente);
                                printf("CPF: ");    
                                scanf("%d", &cpf_gerente);
                                printf("Data de Nascimento: ");
                                scanf("%s", data_nasc_gerente);
                                printf("Username: ");
                                scanf("%s", username_gerente);
                                printf("Senha: ");
                                scanf("%d", &senha_gerente);
                                printf("Senha criptografada: ");
                                criptografia_senha_gerente = (senha_gerente*31)/7;
                                printf("%d\n", criptografia_senha_gerente);
                                printf("______________________________________\n");
                                printf("\nPressione 0 (Zero) para voltar: \n");
                                scanf("%d", &opcao);  
                            }
                            else
                            {
                                system("clear");
                                printf("Senha incorreta\n");
                                printf("Pressione 0 (Zero) para voltar: \n");
                                while(opcao!=0)
                                {
                                    scanf("%d", &opcao);  
                                }                             
                            }
                        break;
                        case 2:
                            printf("__________________________\n");
                            printf("\nSenha de Gerente: ");
                            scanf("%d", &senha);
                            if(senha==senha_admin || senha==senha_gerente)
                            {
                                system("clear");
                                printf("\n         Registro - Cliente         \n");
                                printf("______________________________________\n");
                                printf("\nNome: ");
                                scanf(" %[^\n]s",nome_cliente);
                                printf("CPF: ");    
                                scanf("%d", &cpf_cliente);
                                printf("Data de Nascimento: ");
                                scanf("%s", data_nasc_cliente);
                                printf("Username: ");
                                scanf("%s", username_cliente);
                                if(senha!=0000)
                                {
                                    printf("Senha: ");
                                    scanf("%d", &senha_cliente); 
                                    printf("Senha criptografada: ");
                                    criptografia_senha_cliente = (senha_cliente*31)/7;
                                    printf("%d\n", criptografia_senha_cliente);
                                }
                                else
                                {
                                    printf("Redefinir senha do cliente: ");
                                    scanf("%d", &senha_cliente);
                                }
                                    printf("______________________________________\n");
                                    printf("\nPressione 0 (Zero) para voltar: \n");
                                    scanf("%d", &opcao);         
                            }
                            else
                            {
                                system("clear");
                                printf("Senha incorreta\n");
                                printf("Pressione 0 (Zero) para voltar: \n");
                                while(opcao!=0)
                                {
                                    scanf("%d", &opcao);  
                                }                        
                            }
                        break;
                        case 3: 
                            opcao=3;
                        break;
                        default: 
                            system("clear");
                            printf("Valor inválido\n");
                            printf("Pressione 0 (Zero) para voltar: \n");
                            op = 1;
                            while(op!=0)
                            {
                                scanf("%d", &op);  
                            } 
                    }
                  }while(opcao!=3); 
            break;
            case 2:
                printf("Senha de Gerente: ");
                scanf("%d", &senha);
                if(senha==senha_gerente || senha==senha_admin)
                {
                    do{
                        system("clear");
                        printf("\n   Cadastro de Conta   \n");
                        printf("__________________________\n");
                        printf("\n1- Agência\n");
                        printf("2- Conta\n");
                        printf("3- Limite\n");
                        printf("4- Voltar para o Menu\n");
                        printf("__________________________\n");
                        printf("\nOpção: ");
                        scanf("%d", &opcao);
                        switch(opcao)
                        {
                            case 1:
                                system("clear");
                                printf("\n   Cadastro - Agência   \n");
                                printf("__________________________\n");
                                printf("\nCódigo: ");
                                scanf("%d", &cod_agencia);   
                                printf("Nome: ");
                                scanf("%s", nome_agencia);                
                            break;
                            case 2:
                                system("clear");
                                printf("\n    Cadastro - Conta    \n");
                                printf("__________________________\n");
                                printf("\nNúmero da conta: ");
                                scanf("%d", &num_conta);   
                                printf("\nTipo de Conta:\n");
                                printf("1- Poupança\n");
                                printf("2- Corrente\n");
                                printf("3- Salário\n");
                                printf("__________________________\n");
                                printf("\nOpção: ");
                                scanf("%d", &tipo_conta);
                                if(tipo_conta==1)
                                {
                                    tipo_poupanca = 1;
                                    printf("________________________________________\n");
                                    printf("\nValor para abertura de conta poupanca:\n");
                                    printf("R$");
                                    scanf("%f", &conta_poupanca);
                                }
                                if(tipo_conta==2)
                                {
                                    tipo_cc = 1;
                                }
                                if(tipo_conta==3)
                                {
                                    tipo_cs = 1;
                                } 
                            break;
                            case 3:
                                if(tipo_cc==1)
                                {
                                    system("clear");
                                    printf("\n   Cadastro - Limite   \n");
                                    printf("__________________________\n");
                                    printf("\nR$");
                                    scanf("%f", &limite);                    
                                }
                                else
                                {
                                    printf("______________________________________________\n");
                                    printf("\nLimite somente para conta tipo Conta Corrente.\n");
                                    printf("Pressione 0 (zero) para voltar.\n");
                                    while(op!=0)
                                    {
                                        scanf("%d", &op);  
                                    } 
                                }
                            break;
                        }
                     }while(opcao!=4);
                }
            break;
            case 3:
                do{
                    system("clear");
                    printf("\n   Movimentação bancária   \n");
                    printf("__________________________\n");
                    printf("\n1- Depósito\n");
                    printf("2- Saque\n");
                    printf("3- Voltar para o Menu\n");
                    printf("__________________________\n");
                    printf("\nOpção: ");
                    scanf("%d", &opcao);
                    switch(opcao)
                    {
                        case 1:
                        system("clear");
                        printf("\n   Movimentação - Depósito   \n");
                        printf("_______________________________\n");
                        printf("\n1- Cheque\n");
                        printf("2- Dinheiro\n");
                        printf("__________________________\n");   
                        printf("\nOpção: ");
                        scanf("%d", &opcao);
                        switch(opcao)
                        {       
                            case 1:
                                system("clear");
                                printf("\n      Depósito - Cheque      \n");
                                printf("_______________________________\n");
                                printf("\nDepósito em conta: \n");
                                printf("1- Poupança: \n");
                                printf("2- Corrente: \n");
                                printf("3- Salário: \n");
                                printf("__________________________\n");
                                printf("\nOpção: ");
                                scanf("%d", &opcao);
                                switch(opcao)
                                {
                                    case 1:
                                        system("clear");
                                        printf("\n      Depósito Cheque - Poupança      \n");
                                        printf("________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_poupanca==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("\nValor do cheque: R$");
                                                scanf("%f", &cheque);
                                                conta_poupanca = conta_poupanca + cheque;
                                                qtd_dep_cheque++;
                                                total_dep_cheque = total_dep_cheque + cheque;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui conta Poupança\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    case 2:
                                        system("clear");
                                        printf("\n      Depósito Cheque - Conta Corrente      \n");
                                        printf("_______________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_cc==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("Valor do cheque: R$");
                                                scanf("%f", &cheque);
                                                conta_corrente = conta_corrente + cheque;
                                                qtd_dep_cheque++;
                                                total_dep_cheque = total_dep_cheque + cheque;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui Conta Corrente.\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    case 3:
                                        system("clear");
                                        printf("\n      Depósito Cheque - Conta Salário       \n");
                                        printf("_______________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_cs==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("Valor do cheque: R$");
                                                scanf("%f", &cheque);
                                                conta_salario = conta_salario + cheque;
                                                qtd_dep_cheque++;
                                                total_dep_cheque = total_dep_cheque + cheque;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui Conta Salário.\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    default: printf("Valor inválido\n");
                                }                      
                            break;
                            case 2:
                                system("clear");
                                printf("\n      Depósito - Dinheiro      \n");
                                printf("__________________________________\n");
                                printf("\nDepósito em conta: \n");
                                printf("1- Poupança: \n");
                                printf("2- Corrente: \n");
                                printf("3- Salário: \n");
                                printf("__________________________________\n");
                                printf("\nOpção: ");
                                scanf("%d", &opcao);
                                switch(opcao)
                                {
                                    case 1:
                                        system("clear");
                                        printf("\n      Depósito Dinheiro - Poupança      \n");
                                        printf("__________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_poupanca==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("\nValor em dinheiro: R$");
                                                scanf("%f", &dinheiro);
                                                conta_poupanca = conta_poupanca + dinheiro;
                                                total_dep_dinheiro = total_dep_dinheiro + dinheiro;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui conta Poupança.\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    case 2:
                                        system("clear");
                                        printf("\n    Depósito Dinheiro - Conta Corrente    \n");
                                        printf("____________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_cc==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("\nValor em dinheiro: R$");
                                                scanf("%f", &dinheiro);
                                                conta_corrente = conta_corrente + dinheiro;
                                                total_dep_dinheiro = total_dep_dinheiro + dinheiro;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui Conta Corrente.\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    case 3:
                                        system("clear");
                                        printf("\n     Depósito Dinheiro - Conta Salário    \n");
                                        printf("____________________________________________\n");
                                        printf("\nNúmero da conta: ");
                                        scanf("%d", &conta);
                                        printf("Número da agência: ");
                                        scanf("%d", &ag);
                                        if(conta==num_conta && ag==cod_agencia && tipo_cs==1)
                                        {
                                            printf("Digite a senha: ");
                                            scanf("%d", &senha);
                                            if(senha==senha_cliente)
                                            {
                                                printf("\nValor em dinheiro: R$");
                                                scanf("%f", &dinheiro);
                                                conta_salario = conta_salario + dinheiro;
                                                total_dep_dinheiro = total_dep_dinheiro + dinheiro;
                                            }
                                            else
                                            {
                                                do{
                                                    for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                    {
                                                        printf("\nSenha incorreta.\nTente novamente.\n");
                                                        printf("Senha: ");
                                                        scanf("%d", &senha);
                                                        erro_senha++;
                                                    } 
                                                    printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                    senha_cliente = 0000;
                                                    printf("________________________________________\n"); 
                                                    printf("\n0 - Voltar para o Menu\n");  
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    } 
                                                                  
                                                  }while(erro_senha==3);  
                                            }
                                        }
                                        else
                                        {   
                                            system("clear");
                                            printf("Número de conta ou de agência incorretos ou cliente não possui conta Salário.\nTente Novamente.\n");
                                            printf("Pressione 0 (Zero) para voltar: \n");
                                            while(opcao!=0)
                                            {
                                                scanf("%d", &opcao);  
                                            } 
                                        }
                                    break;
                                    default: printf("Valor inválido\n");
                                }
                            break;
                        } 
                        break;
                        case 2:
                            do{
                            system("clear");
                            printf("\n      Movimentação - Saque      \n");
                            printf("__________________________________\n");
                            printf("\n1- Poupança\n");
                            printf("2- Corrente\n");
                            printf("3- Salário\n");
                            printf("4- Voltar para o Menu\n");
                            printf("__________________________________\n");
                            printf("\nOpção: ");
                            scanf("%d", &opcao);
                            switch(opcao)
                            {
                                case 1:
                                    system("clear");
                                    printf("\n        Saque - Poupança        \n");
                                    printf("__________________________________\n");
                                    printf("\nNúmero da conta: ");
                                    scanf("%d", &conta);
                                    printf("Número da agência: ");
                                    scanf("%d", &ag); 
                                    if(conta==num_conta && ag==cod_agencia && tipo_poupanca==1)
                                    {
                                        printf("Digite a senha: ");
                                        scanf("%d", &senha);
                                        if(senha==senha_cliente)
                                        {
                                            printf("\nValor do saque: R$");
                                            scanf("%f", &saque);
                                            if(conta_poupanca>0 && saque<=conta_poupanca)
                                            {
                                                conta_poupanca = conta_poupanca - saque;
                                            }
                                            else
                                            {
                                                printf("\nSaldo insuficiente\n");
                                                printf("Saldo disponível na conta: R$%.2f\n", conta_poupanca);
                                                printf("________________________________\n");
                                                printf("\nPressione 0 (Zero) para voltar: \n");
                                                op=1;
                                                while(op!=0)
                                                {
                                                    scanf("%d", &op);  
                                                }     
                                            }
                                        } 
                                        else
                                        {
                                            do{
                                                for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                {
                                                    printf("\nSenha incorreta.\nTente novamente.\n");
                                                    printf("Senha: ");
                                                    scanf("%d", &senha);
                                                   erro_senha++;
                                                } 
                                                printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                senha_cliente = 0000;
                                                printf("________________________________________\n"); 
                                                printf("\n0 - Voltar para o Menu\n");  
                                                op=1;
                                                while(op!=0)
                                                {
                                                    scanf("%d", &op);
                                                }                   
                                                }while(erro_senha==3);  
                                            }                                       
                                    }
                                    else
                                    {   
                                        system("clear");
                                        printf("Número de conta ou de agência incorretos ou cliente não possui conta Poupança.\nTente Novamente.\n");
                                        printf("Pressione 0 (Zero) para voltar: \n");
                                        while(opcao!=0)
                                        {
                                            scanf("%d", &opcao);  
                                        } 
                                    }                                                                    
                                break;   
                                case 2:
                                    system("clear");
                                    printf("\n      Saque - Conta Corrente     \n");
                                    printf("___________________________________\n");
                                    printf("\nNúmero da conta: ");
                                    scanf("%d", &conta);
                                    printf("Número da agência: ");
                                    scanf("%d", &ag); 
                                    if(conta==num_conta && ag==cod_agencia && tipo_cc==1)
                                    {
                                        printf("Digite a senha: ");
                                        scanf("%d", &senha);
                                        if(senha==senha_cliente)
                                        {
                                            printf("\nValor do saque: R$");
                                            scanf("%f", &saque);
                                            if(conta_corrente>0 && saque<=conta_corrente)
                                            {
                                                conta_corrente = conta_corrente - saque;
                                            }
                                            else
                                            {
                                                printf("\nSaldo insuficiente\n");
                                                printf("Saldo disponível na conta: R$%.2f\n", conta_corrente);
                                                printf("___________________________________\n");
                                                printf("\nDeseja usar o limite?\n");
                                                printf("\n1-SIM  ||  2-NÃO\n");
                                                scanf("%d", &resp);
                                                if(resp==1)
                                                {
                                                    if(limite>0 && saque<=limite)
                                                    {
                                                        if(saque<=100)
                                                        {
                                                            juros = saque*0.0646;
                                                            total_juros = total_juros + juros;
                                                            limite = limite - juros;
                                                            limite_utilizado = limite_utilizado + saque;
                                                            printf("Valor utilizado do limite: R$%.2f\n", saque + juros);
                                                            printf("Juros debitados: R$%.2f\n", juros);
                                                            op=1;
                                                            scanf("%d", &op);
                                                        }
                                                        if(saque>=100.01 && saque<=1000)
                                                        {
                                                            juros = saque*0.0907;
                                                            total_juros = total_juros + juros;
                                                            limite = limite - juros;
                                                            limite_utilizado = limite_utilizado + saque;
                                                            printf("___________________________________\n");
                                                            printf("\nValor utilizado do limite: R$%.2f\n", saque + juros); 
                                                            printf("Juros debitados: R$%.2f\n", juros);
                                                            printf("___________________________________\n");
                                                            printf("\nPressione 0 (zero) para voltar.\n");
                                                            op=1;
                                                            scanf("%d", &op);              
                                                        }
                                                        if(saque>1000)
                                                        {
                                                            juros = saque*0.1081;
                                                            total_juros = total_juros + juros;
                                                            limite = limite - juros;
                                                            limite_utilizado = limite_utilizado + saque;
                                                            printf("Valor utilizado do limite: R$%.2f\n", saque + juros);
                                                            printf("Juros debitados: R$%.2f\n", juros); 
                                                            op=1;
                                                            scanf("%d", &op);           
                                                        }
                                                    }
                                                    else
                                                    {
                                                        printf("___________________________________\n");
                                                        printf("\nLimite insuficiente\n");
                                                        printf("Limite disponível: R$%.2f\n", limite);
                                                        printf("___________________________________\n");
                                                        printf("\n0 - Menu anterior\n");
                                                        scanf("%d", &op);    
                                                    }
                                                }
                                                else if(resp==2)
                                                {
                                                    printf("Pressione 0 (zero) para voltar para o Menu.\n");
                                                    op=1;
                                                    while(op!=0)
                                                    {
                                                        scanf("%d", &op);
                                                    }                   
                                                }
                                            }  
                                                    
                                        }   
                                        else
                                        {
                                            do{
                                                for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                {
                                                    printf("\nSenha incorreta.\nTente novamente.\n");
                                                    printf("Senha: ");
                                                    scanf("%d", &senha);
                                                   erro_senha++;
                                                } 
                                                printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                senha_cliente = 0000;
                                                printf("________________________________________\n"); 
                                                printf("\n0 - Voltar para o Menu\n");  
                                                op=1;
                                                while(op!=0)
                                                {
                                                    scanf("%d", &op);
                                                }                   
                                                }while(erro_senha==3);  
                                            }                                       
                                    }
                                    else
                                    {   
                                        system("clear");
                                        printf("Número de conta ou de agência incorretos ou cliente não possui Conta Corrente.\nTente Novamente.\n");
                                        printf("Pressione 0 (Zero) para voltar: \n");
                                        while(opcao!=0)
                                        {
                                            scanf("%d", &opcao);  
                                        } 
                                    }                                                   
                                break; 
                                case 3:
                                    system("clear");
                                    printf("\n      Saque - Conta Salário      \n");
                                    printf("___________________________________\n");
                                    printf("\nNúmero da conta: ");
                                    scanf("%d", &conta);
                                    printf("Número da agência: ");
                                    scanf("%d", &ag); 
                                    if(conta==num_conta && ag==cod_agencia && tipo_cs==1)
                                    {
                                        printf("Digite a senha: ");
                                        scanf("%d", &senha);
                                        if(senha==senha_cliente)
                                        {
                                            printf("\nValor do saque: R$");
                                            scanf("%f", &saque);
                                            if(conta_salario>0 && saque<=conta_salario)
                                            {
                                                conta_salario = conta_salario - saque;
                                            }
                                            else
                                            {
                                                printf("\nSaldo insuficiente\n");
                                                printf("Saldo disponível na conta: R$%.2f\n", conta_salario);
                                                printf("________________________________\n");
                                                printf("\nPressione 0 (Zero) para voltar: \n");
                                                op=1;
                                                while(op!=0)
                                                {
                                                    scanf("%d", &op);  
                                                }     
                                            }
                                        } 
                                        else
                                        {
                                            do{
                                                for(erro_senha=1; erro_senha<=3; erro_senha++)
                                                {
                                                    printf("\nSenha incorreta.\nTente novamente.\n");
                                                    printf("Senha: ");
                                                    scanf("%d", &senha);
                                                   erro_senha++;
                                                } 
                                                printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                                senha_cliente = 0000;
                                                printf("________________________________________\n"); 
                                                printf("\n0 - Voltar para o Menu\n");  
                                                op=1;
                                                while(op!=0)
                                                {
                                                    scanf("%d", &op);
                                                }                   
                                                }while(erro_senha==3);  
                                            }                                       
                                    }
                                    else
                                    {   
                                        system("clear");
                                        printf("Número de conta ou de agência incorretos ou cliente não possui conta Salário.\nTente Novamente.\n");
                                        printf("Pressione 0 (Zero) para voltar: \n");
                                        while(opcao!=0)
                                        {
                                            scanf("%d", &opcao);  
                                        } 
                                    }               
                                break;
                                default: printf("Valor inválido\n");      
                            }
                            }while(opcao!=4);
                        break;                    
                    }
                }while(opcao!=3);
            break;
            case 4:
                do{
                    system("clear");
                    printf("\n          Saldo          \n");
                    printf("___________________________\n");  
                    printf("\n1- Poupança\n");    
                    printf("2- Corrente\n");   
                    printf("3- Salário\n"); 
                    printf("4- Voltar para o menu\n");  
                    printf("__________________________\n"); 
                    printf("\nOpção: ");
                    scanf("%d", &opcao);
                    switch(opcao)
                    {
                        case 1: 
                            system("clear");
                            printf("\n       Saldo - Poupança       \n");
                            printf("________________________________\n");
                            printf("\nNúmero da conta: ");
                            scanf("%d", &conta);
                            printf("Número da agência: ");
                            scanf("%d", &ag); 
                            if(conta==num_conta && ag==cod_agencia && tipo_poupanca==1)
                            {
                                printf("Digite a senha: ");
                                scanf("%d", &senha);
                                if(senha==senha_cliente)
                                {
                                    printf("\nSaldo: R$%.2f\n", conta_poupanca);
                                    printf("________________________________\n");
                                    printf("\n0 - Menu anterior\n");
                                    scanf("%d", &op);
                                }
                                else
                                {
                                    do{
                                        for(erro_senha=1; erro_senha<=3; erro_senha++)
                                        {
                                            printf("\nSenha incorreta.\nTente novamente.\n");
                                            printf("Senha: ");
                                            scanf("%d", &senha);
                                            erro_senha++;
                                        } 
                                        printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                        senha_cliente = 0000;
                                        printf("________________________________________\n"); 
                                        printf("\n0 - Voltar para o Menu\n");  
                                        op=1;
                                        while(op!=0)
                                        {
                                            scanf("%d", &op);
                                        }                   
                                      }while(erro_senha==3);  
                                } 
                            }
                            else
                            {   
                                system("clear");
                                printf("Número de conta ou de agência incorretos ou cliente não possui conta Poupança.\nTente Novamente.\n");
                                printf("Pressione 0 (Zero) para voltar: \n");
                                while(opcao!=0)
                                {
                                    scanf("%d", &opcao);  
                                } 
                            } 
                        break;
                        case 2: 
                            system("clear");
                            printf("\n     Saldo - Conta Corrente     \n");
                            printf("__________________________________\n");
                            printf("\nNúmero da conta: ");
                            scanf("%d", &conta);
                            printf("Número da agência: ");
                            scanf("%d", &ag); 
                            if(conta==num_conta && ag==cod_agencia && tipo_cc==1)
                            {
                                printf("Digite a senha: ");
                                scanf("%d", &senha);
                                if(senha==senha_cliente)
                                {
                                    printf("\nSaldo: R$%.2f\n", conta_corrente);
                                    printf("Total do limite utilizado: R$%.2f\n",limite_utilizado);
                                    printf("Saldo com limite: R$%.2f\n", conta_salario + limite);
                                    printf("________________________________\n");
                                    printf("\n0 - Menu anterior\n");
                                    scanf("%d", &op);
                                }
                                else
                                {
                                    do{
                                        for(erro_senha=1; erro_senha<=3; erro_senha++)
                                        {
                                            printf("\nSenha incorreta.\nTente novamente.\n");
                                            printf("Senha: ");
                                            scanf("%d", &senha);
                                            erro_senha++;
                                        } 
                                        printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                        senha_cliente = 0000;
                                        printf("________________________________________\n"); 
                                        printf("\n0 - Voltar para o Menu\n");  
                                        op=1;
                                        while(op!=0)
                                        {
                                            scanf("%d", &op);
                                        }                   
                                      }while(erro_senha==3);  
                                } 
                            }
                            else
                            {   
                                system("clear");
                                printf("Número de conta ou de agência incorretos ou cliente não possui Conta Corrente\nTente Novamente.\n");
                                printf("Pressione 0 (Zero) para voltar: \n");
                                while(opcao!=0)
                                {
                                    scanf("%d", &opcao);  
                                } 
                            } 
                        break;
                        case 3: 
                            system("clear");
                            printf("\n     Saldo - Conta Salário     \n");
                            printf("_________________________________\n");
                            printf("\nNúmero da conta: ");
                            scanf("%d", &conta);
                            printf("Número da agência: ");
                            scanf("%d", &ag); 
                            if(conta==num_conta && ag==cod_agencia && tipo_cs==1)
                            {
                                printf("Digite a senha: ");
                                scanf("%d", &senha);
                                if(senha==senha_cliente)
                                {
                                    printf("\nSaldo: R$%.2f\n", conta_salario);
                                    printf("________________________________\n");
                                    printf("\n0 - Menu anterior\n");
                                    scanf("%d", &op);
                                }
                                else
                                {
                                    do{
                                        for(erro_senha=1; erro_senha<=3; erro_senha++)
                                        {
                                            printf("\nSenha incorreta.\nTente novamente.\n");
                                            printf("Senha: ");
                                            scanf("%d", &senha);
                                            erro_senha++;
                                        } 
                                        printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                                        senha_cliente = 0000;
                                        printf("________________________________________\n"); 
                                        printf("\n0 - Voltar para o Menu\n");  
                                        op=1;
                                        while(op!=0)
                                        {
                                            scanf("%d", &op);
                                        }                   
                                      }while(erro_senha==3);  
                                } 
                            }
                            else
                            {   
                                system("clear");
                                printf("Número de conta ou de agência incorretos ou cliente não possui conta Salário.\nTente Novamente.\n");
                                printf("Pressione 0 (Zero) para voltar: \n");
                                while(opcao!=0)
                                {
                                    scanf("%d", &opcao);  
                                } 
                            } 
                        break;
                        default: printf("Valor inválido\n");
                    } 
                  }while(opcao!=4);
            break;
            case 5:
                system("clear");
                printf("\n          Juros Debitados          \n");
                printf("_____________________________________\n");
                printf("\nNúmero da conta: ");
                scanf("%d", &conta);
                printf("Número da agência: ");
                scanf("%d", &ag); 
                if(conta==num_conta && ag==cod_agencia && tipo_cc==1)
                {
                    printf("Digite a senha: ");
                    scanf("%d", &senha);
                    if(senha==senha_cliente)
                    {
                        printf("\nTotal de juros debitados: R$%.2f\n", total_juros);
                        printf("_____________________________________\n");
                        printf("\n0 - Menu anterior\n");
                        scanf("%d", &op);
                    }
                    else
                    {
                        do{
                            for(erro_senha=1; erro_senha<=3; erro_senha++)
                            {
                                printf("\nSenha incorreta.\nTente novamente.\n");
                                printf("Senha: ");
                                scanf("%d", &senha);
                                erro_senha++;
                            } 
                            printf("\nSenha digitada incorretamente 3 vezes.\nRedefina a senha com o gerente\n");
                            senha_cliente = 0000;
                            printf("________________________________________\n"); 
                            printf("\n0 - Voltar para o Menu\n");  
                            op=1;
                            while(op!=0)
                            {
                                scanf("%d", &op);
                            }                   
                          }while(erro_senha==3);  
                    } 
                }
                else
                {   
                    system("clear");
                    printf("Número de conta ou de agência incorretos ou cliente não possui Conta Corrente.\nTente Novamente.\n");
                    printf("Pressione 0 (Zero) para voltar: \n");
                    while(opcao!=0)
                    {
                        scanf("%d", &opcao);  
                    } 
                } 
            break;
            case 6:
                printf("Informe a senha: ");
                scanf("%d", &senha);
                if(senha==senha_gerente || senha==senha_admin)
                {
                    do{
                        system("clear");
                        printf("\n         Relatório Gerencial         \n");
                        printf("_____________________________________\n");
                        printf("\nTotal de depósitos em cheque: R$%.2f\n", total_dep_cheque);
                        printf("Total em dinheiro: R$%.2f\n", total_dep_dinheiro);
                        printf("Quantidade de cheques depositados: %d\n",qtd_dep_cheque);
                        printf("_____________________________________\n");
                        printf("\n0 - Voltar para o menu\n");
                        scanf("%d", &opcao); 
                      }while(opcao!=0);
                }
                else
                {
                    printf("Senha inválida\n");
                }
            break;
            case 7:
                printf("Saindo\n");
            break;
            default: 
                printf("Valor inválido\n");
                printf("Pressione 0 (Zero) para voltar: \n");
                while(opcao!=0)
                {
                    scanf("%d", &opcao); 
                }            
        }
      }while(opcao!=7);
    
    return 0;
}
