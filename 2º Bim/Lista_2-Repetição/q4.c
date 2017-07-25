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
