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
