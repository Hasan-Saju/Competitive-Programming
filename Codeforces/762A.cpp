#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)


#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

#define NL          "\n"

vector<ll> preProcess(ll n)
{
    vector<ll>v;

    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
                v.pb(i), v.pb(n/i);
            else
                v.pb(i);
        }

    }
    return v;
}

int main()
{
    fast
    ll n,k;
    cin>>n>>k;
    vector<ll> v=preProcess(n);
    sort(v.begin(),v.end());

    //cout<<v.size()<<NL;
    if(v.size()<k)
        cout<<"-1"<<NL;
    else
        cout<<v[k-1]<<NL;
}

