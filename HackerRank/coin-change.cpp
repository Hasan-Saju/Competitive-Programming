#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>coins;
    ll dp[500];

    for(ll i=0; i<m; i++)
    {
        ll x;
        cin>>x;
        coins.push_back(x);
    }
    memset(dp,0,sizeof(dp));
    dp[0]=1;

    for(int i=0; i<coins.size(); i++)
    {
        for(int j=coins[i]; j<=n; j++)
        {
            dp[j]+=dp[j-coins[i]];
        }
    }
    cout<<dp[n];
}
