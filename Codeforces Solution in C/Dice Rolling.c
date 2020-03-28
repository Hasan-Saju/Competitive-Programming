#include<stdio.h>
int main()
{
    int t,i,ans,x;
    scanf("%d",&t);

    int ara[t];

    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        ans=x/7;
        if(x%7==0)ans=ans;
        else ans=ans+1;
        ara[i]=ans;

    }
     for(i=0;i<t;i++)
    {
       printf("%d\n",ara[i]);
    }


}
