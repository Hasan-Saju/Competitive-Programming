#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    int maximizeGain(int i, bool canBuy, vector<int>& prices)
    {
        if(i>=prices.size())
            return 0;
        if(dp[i][canBuy]!=-1)
            return dp[i][canBuy];

        int profit;
        if(canBuy)
        {
            int buy = -prices[i] + maximizeGain(i+1, false, prices);
            int skip = maximizeGain(i+1, true, prices);

            profit = max(buy, skip);
        }
        else
        {
            int sell = prices[i] + maximizeGain(i+2, true, prices);
            int hold = maximizeGain(i+1, false, prices);

            profit = max(sell, hold);
        }
        return dp[i][canBuy] = profit;
    }
    int maxProfit(vector<int>& prices)
    {
        dp.assign(prices.size()+5, vector<int>(2,-1));
        return maximizeGain(0, true, prices);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,0,2};
    cout<<obj.maxProfit(vec);
}
