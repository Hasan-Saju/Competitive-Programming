#include<stdio.h>
int main()
{
    int t,i;
    scanf("&d",&t);

    for(i=1; i<=t; i++)
    {   long long k,n;
        int j,a,b,count;
        scanf("%lld %d %d %lld",&n,&a,&b,&k);
        for(j=1; j<=n; j++)
        {
            if(n%a==0&&n%b==0);
            else if(n%a==0||n%b==0)
                count++;

            if(count>=k)
                printf("Win");
            else
                printf("Lose");
        }
    }

}
