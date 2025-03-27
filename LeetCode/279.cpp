#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recursion(int sum, vector<int>& dp)
    {
        if(sum<0)
            return 10005;
        if(sum==0)
            return 0;
        if(dp[sum]!=-1)
            return dp[sum];

        int res = INT_MAX;
        for(int i=1; i*i<=sum; i++)
        {
            int temp = recursion(sum-(i*i), dp);
            res = min(res, 1 + temp);
        }

        return dp[sum] = res;
    }
    int numSquares(int n)
    {
        vector<int>dp(n+1,-1);
        return recursion(n, dp);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.numSquares(22);
}

