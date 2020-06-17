#include<bits/stdc++.h>
using namespace std;
int dp[1000006];
vector<int>v;

void lis(int n)          ///longest increasing subsequence
{
    for(int i=0; i<=n; i++)
        dp[i]=1;

    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<i; j++)
        {
            if(v[i]>v[j])
                dp[i]=max(dp[i],dp[j]),flag=1;
        }
        if(flag)dp[i]+=1;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        lis(n);
        int longest=0;
        for(int i=0; i<n; i++)
        {
            cout<<dp[i]<<" ";
            longest=max(longest,dp[i]);
        }
        cout<<n-longest<<"\n";
        v.clear();
    }


}
