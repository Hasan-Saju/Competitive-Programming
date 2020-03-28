#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,c,i,count=0,x;
    scanf("%d %d",&n,&c);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {
        x=abs(ara[i]-ara[i+1]);
        if(x<=c)count++;
        else if(x>c)count=0;

    }
    printf("%d",count);
}
