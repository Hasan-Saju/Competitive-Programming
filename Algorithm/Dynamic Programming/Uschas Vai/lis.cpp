#include<bits/stdc++.h>
using namespace std;

int n;
int dp[100][100];
int ara[100];
int LIS(int prev,int i)
{
    if(i==n+1)return 0;
    if(dp[prev][i]!=-1) return dp[prev][i];

    int ret = 0;
    if(prev == 0 or ara[i]>ara[prev])
    {
        ret = max(1+LIS(i,i+1),LIS(prev,i+1));
    }
    else ret = LIS(prev,i+1);

    return dp[prev][i] = ret;

}


int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }

    cout<<LIS(0,1)<<endl;
}
