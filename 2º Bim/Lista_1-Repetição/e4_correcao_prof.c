#include<stdio.h>

int main()
{
    int , m1, m2, i;

    scanf("%d", &n);
    m1 = n;
    for(i=2; i<=10; i++)
    {
        scanf("%d", &n);
        if(n>m1)
        {
            m2 = m1;
            m1 = n;         
        }else
            if(i==2)
            {
                m2=n;               
            }
            if(n>m2)
            {
                m2=n
            }
    }
        printf("Maior 1 = %d\n", m1);
        printf("Maior 2 = %d\n", m2);
    
    return 0;
}
