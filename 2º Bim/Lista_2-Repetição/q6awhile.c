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
