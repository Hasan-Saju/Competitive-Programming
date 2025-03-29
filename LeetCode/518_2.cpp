#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>dp;
    int dfs(int i, int amount, vector<int>& coins)
    {
        if(amount==0)
            return 1;
        else if(i>=coins.size() or amount<0)
            return 0;
        if(dp[i][amount]!=-1)
            return dp[i][amount];

        dp[i][amount] = dfs(i, amount-coins[i], coins) + dfs(i+1, amount, coins);
        return dp[i][amount];
    }
public:
    int change(int amount, vector<int>& coins)
    {
        dp.resize(coins.size(), vector<int>(5001,-1));
        return dfs(0, amount, coins);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,5};
    cout<<obj.change(5,vec);
}

