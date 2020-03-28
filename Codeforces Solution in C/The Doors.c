#include<stdio.h>
int main()
{
    int n,i,zero=0,one=0,ans,ans2;
    scanf("%d",&n);

    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);

    }

    for(i=0; i<n; i++)
    {
        if(ara[i]==1)
            one++;
        else
            zero++;
    }


    for(i=0; i<n; i++)
    {
        if(ara[i]==1)
            one--;
        if(one==0)
        {
            ans=i+1;
            break;
        }
    }


    for(i=0; i<n; i++)
    {
        if(ara[i]==0)
            zero--;
        if(zero==0)
        {
            ans2=i+1;
            break;
        }
    }


    if(ans<ans2)
        printf("%d",ans);
    else
        printf ("%d",ans2);


}
