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
