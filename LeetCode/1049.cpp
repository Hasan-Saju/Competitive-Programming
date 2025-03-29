#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>dp;
    int dfs(int i, int total, int target, int stoneSum, vector<int>& stones)
    {
        if(total>=target || i>=stones.size())
            return abs(total - (stoneSum-total));
        if(dp[i][total]!=-1)
            return dp[i][total];

        dp[i][total] = min(dfs(i+1, total+stones[i], target, stoneSum, stones), dfs(i+1, total, target, stoneSum, stones));
        cout<<i<<" "<<stoneSum<<" "<<dp[i][total]<<"\n";
        return dp[i][total];
    }
public:
    int lastStoneWeightII(vector<int>& stones)
    {
        int stoneSum=0;
        for(auto x:stones)
            stoneSum+=x;
        dp.resize(stones.size(), vector<int>(stoneSum/2+1,-1));
        return dfs(0, 0, stoneSum/2, stoneSum, stones);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {31,26,33,21,40};
    cout<<obj.lastStoneWeightII(vec);
}

