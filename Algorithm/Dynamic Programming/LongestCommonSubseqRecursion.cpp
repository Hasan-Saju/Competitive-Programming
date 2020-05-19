#include<bits/stdc++.h>
using namespace std;

int dp[105][105];
string first, second;

int lcs(int len1, int len2)
{
    if(len1==0 || len2==0)
    {
        return 0;
    }

    if(dp[len1][len2]!= -1)
        return dp[len1][len2];

    if(first[len1-1] == second[len2-1])   // string er index 0 base
    {
        return dp[len1][len2] = 1 + lcs(len1-1, len2-1);
    }

    else
    {
        return dp[len1][len2] = max( lcs(len1-1,len2), lcs(len1,len2-1) );
    }

    return dp[len1][len2];

}


int main()
{
    cin>>first>>second;
    memset(dp,-1,sizeof(dp));
   int ans= lcs(first.size(), second.size());
   cout<<ans;
}
