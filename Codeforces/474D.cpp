#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int k;
int dp[100005];
int pref[100005];

int process(int n)
{
    if(n==0)return 1;
    if(dp[n]!= -1)return dp[n];

    int ans=0;
    //white
    if(n>=k)
    ans+=process(n-k) , ans%=mod;

    //red
    ans+=process(n-1) , ans=ans%mod;

    return dp[n]=ans;

}

void init()
{
    for(int i=1;i<=100000;i++)
        pref[i]=pref[i-1]+ process(i) , pref[i]%=mod;
}

int main()
{
    int t;
    cin>>t>>k;
    memset(dp,-1,sizeof(dp));
    init();

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans= ( ( pref[b]-pref[a-1] )+mod )% mod;
        cout<<ans<<endl;

    }
}

// 1 1 2 3 5 8 13
//mod 4
//second ta mod a porle (-) ashar chance ase
