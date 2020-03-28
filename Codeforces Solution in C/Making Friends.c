#include<stdio.h>
int main()
{
    int n,i,t,j,max=0,sum;
    scanf("%d",&t);


    for(j=0; j<t; j++)
    {
        max=0;
        sum=0;
int ara[2*n];
        scanf("%d",&n);


        for(i=1; i<=2*n; i++)
        {
            scanf("%d",ara[i]);
        }

        for(i=1; i<=n; i++)
        {
            sum=ara[i]+ ara[2*n-i+1];
            if(sum>=max)
                max=sum;
        }
        printf("%d",max);

    }
}
