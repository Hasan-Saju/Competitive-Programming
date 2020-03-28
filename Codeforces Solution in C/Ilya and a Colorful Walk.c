#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,ans,ans2;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>0;j--)
        {
            if(ara[i]!=ara[j])goto label;
        }
    }
    label:
    ans=abs(i-j);


     for(j=n-1;j>0;j--)
    {
       for(i=0;i<n;i++)
        {
            if(ara[j]!=ara[i])goto label2;
        }
    }
    label2:
    ans2=abs(i-j);


    if(ans2>=ans)ans=ans2;

    printf("%d",ans);



}
