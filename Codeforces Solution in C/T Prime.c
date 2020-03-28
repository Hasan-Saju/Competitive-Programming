#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);

    long long ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=2;j<=(ara[i]/sqrt(2));j++)
        {
            if(ara[i]%j==0)count++;

        }
        if(count==1)printf("YES\n");
        else printf("NO\n");
    }
}
