#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define NL          "\n"

set<ll> preProcess(ll n)
{
    set<ll>s;
    for(ll i=1;i*i<=n;i++)
    {
        s.insert(i);
        s.insert(n/i);
    }
    s.insert(0);
    return s;
}

int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        set<ll> s= preProcess(n);

        cout<<s.size()<<NL;
        for(auto x: s )
            cout<<x<<" ";
        cout<<NL;
    }
}
