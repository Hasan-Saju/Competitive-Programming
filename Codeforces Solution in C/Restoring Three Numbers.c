#include<stdio.h>
int main()
{
    long long a,b,c,d,p,q,r,an1,an2,an3,x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a>=b&&a>=c&&a>=d){x=a;p=b;q=c;r=d;}
     else if(b>=a&&b>=c&&b>=d){p=a;x=b;q=c;r=d;}
      else if(c>=a&&c>=b&&c>=d){p=a;q=b;x=c;r=d;}
      else  if(d>=a&&d>=b&&d>=c){p=a;q=b;r=c;x=d;}

      an1=x-p;
      an2=x-q;
      an3=x-r;

      printf("%lld %lld %lld",an1,an2,an3);





}
