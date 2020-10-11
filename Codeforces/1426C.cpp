#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans = LONG_MAX;
        for(int i=1;i*i<=n;i++)
        {
            ans=min(ans, (i-1)+ ((n-i)+(i-1))/i );
        }
        cout<<ans<<"\n";
    }
}
