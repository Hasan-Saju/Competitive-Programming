#include<bits/stdc++.h>
using namespace std;
class Solution
{
    const int INF = 1e9;
    int dp[14][10005];
public:
    int recursion(int i, vector<int>& coins, int current)
    {
        if(current==0)
            return 0;
        else if(current<0 or i>=coins.size())
            return INF;
        else if(dp[i][current]!=-1)
            return dp[i][current];

        return dp[i][current] = min(1 + recursion(i, coins, current-coins[i]),
                                    recursion(i+1, coins, current));
    }
    int coinChange(vector<int>& coins, int amount)
    {
        memset(dp, -1, sizeof(dp));

        int coin = recursion(0, coins, amount);
        return coin == INF? -1:coin ;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,5};
    cout<<obj.coinChange(vec,11);
}
