Na instrução x = ++i, x recebe o valor de i com o incremento.

Ex:

#include<stdio.h>

int main()
{
    int i, x;

    i = 10;
    x = ++i;
    printf("Valor de i = %d \nValor de x = %d\n",i,x);

    return 0;
}

Resultado:
----------
Valor de i = 11 
Valor de x = 11


Em x = i++, i é incrementado após ser atribuído a x.

Ex:

#include<stdio.h>

int main()
{
    int i, x;

    i = 10;
    x = i++;
    printf("Valor de i = %d \nValor de x = %d\n",i,x);

    return 0;
}

Resultado:
----------
Valor de i = 11 
Valor de x = 10
