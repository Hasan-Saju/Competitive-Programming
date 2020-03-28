#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    int ara[1000];
    for(i=0;i<1000;i++)
    {
        ara[i]=0;
    }

    for(i=0;n!=0;i++)
    {
        while(n%10==0)
            {
                n=n/10;
            }
            ara[n]=1;
        n=n+1;
        ara[n]=1;

    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)count++;
    }
    printf("%d",count);

}
