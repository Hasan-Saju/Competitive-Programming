#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int recurse(vector<int>& cost, int i, vector<int>& dp)
    {
        if(i>=cost.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];

        return dp[i] = cost[i] + min(recurse(cost, i+1, dp), recurse(cost, i+2, dp));

    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(), -1);
        return min(recurse(cost, 0, dp), recurse(cost, 1, dp));
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,100,1,1,1,100,1,1,100,1};
    cout<<obj.minCostClimbingStairs(vec);
}

