#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,mod;
    cin>>n;
    mod=n%10;
    if(mod>5)cout<<n+10-mod;
    else cout<<n-mod;
}
