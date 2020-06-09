#include<bits/stdc++.h>
using namespace std;
//#define mod     1000003
#define ll      long long

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

ll dp[5000006];

void factorial(ll mod)
{
    dp[0]=dp[1]=1;
    ll N=5000000;

    for(int i=2; i<=N; i++)
    {
        dp[i]=(i%mod*dp[i-1]%mod)%mod;
    }

}

int main()
{
    factorial();

    ll n,r,mod;
    cin>>n>>r>>mod;

    ll down= (dp[r]%mod * dp[n-r]%mod)%mod;
    ll ans = (dp[n]%mod * BMod(down,mod-2,mod) )%mod;

    cout<<"nCr: "<<ans;
}
