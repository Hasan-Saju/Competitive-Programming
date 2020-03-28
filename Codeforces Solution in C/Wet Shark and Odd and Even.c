#include<stdio.h>
int main()
{
    long long n,min=1000000000,ans,i,total=0;
    scanf("%lld",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
        if(ara[i]<=min&&ara[i]%2!=0)min=ara[i];
        total=total+ara[i];
    }

    if(total%2==0)ans=total;
    else ans=total-min;

    printf("%lld",ans);





}
