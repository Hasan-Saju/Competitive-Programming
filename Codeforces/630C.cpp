#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long ans=1;
    scanf("%d",&n);
    //ans=pow(2,(n+1))-2;
    ans=ans<<(n+1);
    printf("%lld",ans-2);
}
