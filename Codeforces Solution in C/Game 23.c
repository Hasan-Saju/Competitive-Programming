#include<stdio.h>
int main()
{
    long long n,m,count=0,d;
    scanf("%lld %lld",&n,&m);
    d=m/n;
    if(m%n==0)
    {
        while(d%3==0)
        {
            d=d/3;
            count++;
        }
        while(d%2==0)
        {
            d=d/2;
            count++;
        }
        if(d==1)printf("%d",count);
        else printf("-1");
    }
    else printf("-1");
}
