#include<stdio.h>
int main()
{
    int n,plus=0,minus=0,i,ans;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {
        if(ara[i]>0)plus=plus+ara[i];
        if(ara[i]<0)minus=minus+ara[i];

    }

   ans= plus-minus;
   printf("%d",ans);
}
