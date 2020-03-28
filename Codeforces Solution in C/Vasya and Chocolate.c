#include<stdio.h>
int main()
{
    long long t,i,s,a,b,c,buy,free,t_free,total;
    scanf("%lld",&t);
    long long ara[t];

    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);



    buy=s/c;
    free=buy/a;
    t_free=free*b;

    total=buy+t_free;

   ara[i]=total;

    }


    for(i=0;i<t;i++)
    {
         printf("%lld ",ara[i]);


    }



}
