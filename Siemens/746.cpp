#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>dp;
    int minimizeCost(int i, vector<int>& cost)
    {
        if(i>=cost.size())
            return 0;
        else if(dp[i]!=-1)
            return dp[i];

        return dp[i] = min(cost[i] + minimizeCost(i+1, cost), cost[i] + minimizeCost(i+2, cost));
    }
    int minCostClimbingStairs(vector<int>& cost)
    {
        dp.resize(cost.size()+5, -1);
        return min(minimizeCost(0, cost), minimizeCost(1, cost));
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {10,15,20};
    cout<<obj.minCostClimbingStairs(vec);
}

