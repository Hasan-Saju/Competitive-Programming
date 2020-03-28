#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k,x,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&k,&x);
        printf("%lld \n",((k-1)*9)+x);
    }
}
