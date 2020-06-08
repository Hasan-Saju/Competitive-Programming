#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

/// finding nCk

ll dp[1000001];

ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}

ll C(ll n,ll k)
{
    if(k>n)return 0;    ///3 tar moddhe 5 ta 0 vabe newa jay tai

    ll res= dp[n];
    ll down=dp[k]%mod * dp[n-k]%mod;
    res=(res%mod * BMod(down,mod-2,mod)%mod)%mod;
    return res;
}

void PreCalculation()
{
    dp[0]=dp[1]=1;

    for(ll i=2;i<=1000000;i++)
        dp[i]=(dp[i-1]%mod * i%mod) %mod;
}

int main()
{
    ll q;
    cin>>q;
    PreCalculation();

    while(q--)
    {
        ll n,k;
        cin>>n>>k

        cout<<C(n,k)<<endl;
    }
}
