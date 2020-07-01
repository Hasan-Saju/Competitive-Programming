#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n)    for(int i=0;i<n;i++)
#define NL          "\n"
#define ll          long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        vector<ll>v;
        vector<ll>pos(n+2);
        vector<ll>M;

        FOR(i,n)
        {
            ll x;
            cin>>x;
            v.emplace_back(x);
            pos[x]=i;
        }

        FOR(i,m)
        {
            ll x;
            cin>>x;
            M.emplace_back(x);
        }

        ll last=0,ans=0;
        for(ll i=0;i<m;i++)
        {
            ll x=pos[M[i]];
            if(last>x)
                ans++;
            else
            {
                ll y = x-i;
                ans+= 2*y+1;
                last= x;
            }
        }

        cout<<ans<<NL;

    }
}
