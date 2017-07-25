//Lista de Exercícios 3 - Exercício 11

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,Media;
    
    printf("Média de 20 números\n");
    printf("Informe 20 números: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16,&n17,&n18,&n19,&n20);
    Media = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15+n16+n17+n18+n19+n20)/20;
    printf("Média = %d\n",Media);
    return 0;
}
