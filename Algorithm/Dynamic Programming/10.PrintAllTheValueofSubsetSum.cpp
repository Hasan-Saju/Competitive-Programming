#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[105];
    int n,sum;
    cin>>n>>sum;

    for(int i=1;i<=n;i++)
        cin>>ara[i];

    int dp[sum+1];
    memset(dp,0,sizeof(dp));

    dp[0]=1;

    for(int i=1;i<=n;i++)
    {
        int current=ara[i];
        for(int j=sum;j>=current;j--)
        {
            if(dp[j]!=0 or ( dp[j-current]==0 ))
                continue;
            else
                dp[j]=current;
        }
    }

    if(dp[sum]==0)
        cout<<"Can't make the sum.";
    else
    {
        int curr=sum;
        while(curr>0)
        {
            cout<<dp[curr]<<" ";
            curr=curr-dp[curr];
        }
    }
}

