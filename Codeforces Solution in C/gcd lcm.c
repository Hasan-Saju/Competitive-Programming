#include<stdio.h>1
int main ()
{
    long long t,a,b,gcd,lcm,min;
    scanf("%d",&t);
    for(; t>0; t--)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
        {
            min=b;
        }
        else
        {
            min=a;
        }
        for(; min>=1; min--)
        {
            if(a%min==0&&b%min==0)
            {
                gcd=min;
                break;

            }
        }

        lcm=(a*b)/(gcd);
        printf("%lld %lld\n",gcd,lcm);

    }
}

