#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>dp;
    int dfs(int buy, int i, vector<int>& prices)
    {
        if(i>=prices.size())
            return 0;
        if(dp[buy][i]!=-1)
            return dp[buy][i];

        int res = INT_MIN;
        if(buy)
        {
            res = max(res, max(-prices[i] + dfs(!buy, i+1, prices), dfs(buy, i+1, prices)));
        }
        else
        {
            res = max(res, max(prices[i] + dfs(!buy, i+2, prices), dfs(buy, i+1, prices)));
        }
        dp[buy][i] = res;
        return dp[buy][i];
    }
public:
    int maxProfit(vector<int>& prices)
    {
        dp.resize(2, vector<int>(prices.size(),-1));
        return dfs(1, 0, prices);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,0,2};
    cout<<obj.maxProfit(vec);
}

