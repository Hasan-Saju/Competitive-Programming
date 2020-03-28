#include<stdio.h>
int main()
{
    long long a,b,min,x,remain,gcd,lcm,t;
    scanf("%lld",&t);
    for(; t>0; t--)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
        {
            min=b;
            x=a;
        }
        else
        {
            min=a;
            x=b;
        }
        remain=x%min;
        while(remain)
        {

            x=min;
            min=remain;
            remain=x%min;
        }
        gcd=min;
        lcm=(a*b)/(gcd);
        printf("%lld %lld\n",gcd,lcm);
    }

}
