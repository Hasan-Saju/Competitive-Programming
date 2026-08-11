#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>>dp;
    const int OFFSET = 1000;
public:
    int trs(int i, int cur, int& target, vector<int>& nums)
    {
        if(i==nums.size() and cur==target)
            return 1;
        else if(i>=nums.size())
            return 0;
        else if(dp[i][cur+OFFSET]!=-1)
            return dp[i][cur+OFFSET];

        return dp[i][cur+OFFSET] = trs(i+1, cur+nums[i], target, nums)
                            + trs(i+1, cur-nums[i], target, nums);
    }
    int findTargetSumWays(vector<int>& nums, int target)
    {
        dp.assign(25, vector<int>(2005, -1));
        return trs(0, 0, target, nums);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,1,1};
    cout<<obj.findTargetSumWays(vec, 3);
}

