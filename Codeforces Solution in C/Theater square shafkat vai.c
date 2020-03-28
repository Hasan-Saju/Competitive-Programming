#include<stdio.h>
int main()
{
    long long n,m,x,y,a;
    scanf("%lld %lld %lld", &n, &m, &a);
    x=n/a;
    y=m/a;

    if(n%a==0)x=x;
    if(n%a!=0){
        x=x+1;
    }
    if(m%a==0)y=y;
      if(m%a!=0){
        y=y+1;

    }
     printf("%lld\n", x*y);

    }

