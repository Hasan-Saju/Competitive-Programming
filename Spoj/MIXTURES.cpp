#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
vector<int>v;

int sum(int x,int y)
{
    int sum=0;
   for(int i=x;i<=y;i++)
    sum=(sum+v[i])%100;
   return sum;
}

int MCM(int i, int j)
{
    //cout<<i<<" "<<j<<"\n";
    if(i==j)
    {
        dp[i][j]=0;
        return dp[i][j];
    }

    if(dp[i][j]!=-1)
        return dp[i][j];

    int result=INT_MAX;
    for(int k=i; k<j; k++)
    {
        int temp= MCM(i,k)+MCM(k+1,j)+ sum(i,k)*sum(k+1,j);
        result=min(result,temp);
    }
    dp[i][j]=result;
    //cout<<i<<" "<<j<<" "<<result<<"\n";
    return dp[i][j];

}

int main()
{
    int n;
    while((scanf("%d",&n))==1)
    {
        v.clear();
        memset(dp,-1,sizeof(dp));

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<MCM(0,n-1)<<"\n";
    }
}
