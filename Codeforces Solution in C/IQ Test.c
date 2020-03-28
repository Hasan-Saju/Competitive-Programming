#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]%2==0)even++;
        if(ara[i]%2!=0||ara[i]==1)odd++;
    }
    if(even<odd)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i]%2==0)break;
        } printf("%d",i+1);
    }
    else if(odd<even)
    {
         for(i=0;i<n;i++)
        {
            if(ara[i]%2!=0)break;
        } printf("%d",i+1);
    }
}
