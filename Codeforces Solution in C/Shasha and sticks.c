#include<stdio.h>
int main()
{

    long long n,k,a;
    scanf("%lld %lld",&n,&k);

    a=n/k;

    if(a%2==0)printf("NO");
    else printf("YES");

}
