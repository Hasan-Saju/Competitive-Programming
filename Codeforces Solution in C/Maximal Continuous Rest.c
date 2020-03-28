
#include<stdio.h>
int main()
{
    int n,count=0,k=0,max=0,i;
    scanf("%d",&n);

    int ara[n+2];
    int ara2[n+6];

    for(i=0; i<n+5; i++)
    {
        ara2[i]=0;
    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    ara[n]=ara[0];
    ara[n+1]=0;
    for(i=0; i<=n+1; i++)
    {
        if(ara[i]==1)
            count++;
        else if(ara[i]==0)
        {
            ara2[k]=count;
            k++;
            count=0;
        }
    }
    for(i=0;i<=n+4;i++)
    {
        if(ara2[i]>=max)max=ara2[i];
        else max=max;


    }

    printf("%d",max);



}
