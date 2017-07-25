#include<stdio.h>

int main()
{
    int i;

    for(i=100; i<=400; i++)
    {
        if(i%4==0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
