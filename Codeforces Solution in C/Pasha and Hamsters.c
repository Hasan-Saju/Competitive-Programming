#include<stdio.h>
int main()
{
    int n,a,b,i,x;
    scanf("%d %d %d",&n,&a,&b);

    int ara[n];

    for(i=0;i<n;i++)
    {
        ara[i]=2;

    }

    for(i=0;i<a;i++)
    {
        scanf("%d",&x);
        ara[x-1]=1;
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&x);
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);

    }




}
