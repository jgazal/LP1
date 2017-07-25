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
