
#include<bits/stdc++.h>
using namespace std;

int n;
int dp[100];
int ara[100];
int LIS(int i)
{
    if(i==n)return 0;
    if(dp[i]!=-1) return dp[i];

    int ret = 0;
    for(int j=i+1;j<n;j++)
    {
        if(ara[j]>ara[i]) ret = max(ret,LIS(j));
    }
    return dp[i] = ret + 1;

}


int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,LIS(i));
    }
    cout<<ans<<endl;
}
