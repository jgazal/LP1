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
