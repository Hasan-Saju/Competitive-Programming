#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100];  //input array
    int n,sum;
    cin>>n>>sum;       //sum=koto sum hoite hobe.........n=number of element in input array

    for(int i=1;i<=n;i++)
        cin>>ara[i];

    bool dp[n+1][sum+1];
    dp[0][0]=1;

    for(int i=1;i<=sum;i++)
        dp[0][i]=0;

    for(int i=1;i<=n;i++)  //prottek row er jonno
    {
        for(int j=0;j<=sum;j++)
        {
            if(j<ara[i])
                dp[i][j]=dp[i-1][j];
            else
            {
                int need= j-ara[i];
                if(dp[i-1][j]==1 or dp[i-1][need]==1)
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }
    }

    bool ans= dp[n][sum];
    if(ans)
        cout<<"Getting "<<sum <<" is Possible.";
    else
        cout<<"-1";
}
