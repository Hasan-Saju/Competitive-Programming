#include<bits/stdc++.h>
using namespace std;
int ara[1000000];
int main()
{
    long long n,root,a,b;
    scanf("%lld",&n);
    root=sqrt(n);
    if((root*root)!=n)
    {
        a=root;
        b=root+1;
    }
    else
    {
        a=root;
        b=root;
    }
    if((a*b)>=n)
        printf("%lld",a+b);
    else
        printf("%lld",a+b+1);
}
