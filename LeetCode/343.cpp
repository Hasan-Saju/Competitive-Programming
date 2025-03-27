#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<int>dp;
    int dfs(int n)
    {
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        int res=0;
        for(int i=1; i<n; i++)
        {
            res = max(res, max(i*(n-i), i*dfs(n-i)));
        }

        dp[n] = res;
        return dp[n];
    }
public:
    int integerBreak(int n)
    {
        dp.resize(n+1, -1);
        return dfs(n);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.integerBreak(10);
}
