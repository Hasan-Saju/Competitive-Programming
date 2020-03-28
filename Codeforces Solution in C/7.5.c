#include<stdio.h>
int main ()
{
    int t,a,b,gcd,lcm,min;
    scanf("%d",&t);
    for(;t>0;t--)
    {
    scanf("%d %d",&a,&b);
    if(a>b){
        min=b;
    }else{
        min=a;
    }
    for(;min>=1;min--){
        if(a%min==0&&b%min==0){
                gcd=min;
                break;
        }

    }
    printf("%d\n",gcd);
    lcm=(a*b)/(gcd);
    printf("%d\n",lcm);

    }
}

