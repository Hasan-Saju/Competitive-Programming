#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);

    }


    int max=0;

    for(i=0;i<n;i++)
    {
        if(ara[i]>=max)max=ara[i];
        else max=max;
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==max)count++;
    }

    printf("%d",count);






}
