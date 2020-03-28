#include<stdio.h>
int main()
{
    int i,t,x,j,is_prime=1;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&x);

        for(j=2; j<=x/2; j++)
        {
            if(x%j==0)
            {
                is_prime=0;
            }
        }

        if(is_prime==0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
}
