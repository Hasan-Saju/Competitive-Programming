#include<stdio.h>
int main()
{
    int n,k,count=0,ans,i,u;
    scanf("%d",&n);
    u=n*2;
    int ara[u];

    for(i=0;i<u;i=i+2)
    {
        scanf("%d %d",&ara[i],&ara[i+1]);
    }
    scanf("%d",&k);

    for(i=0;i<u;i=i+2)
    {
        if(k>=ara[i]&&k<=ara[i+1])break;
        else count++;




    }


    ans=n-count;
    printf("%d",ans);






}
