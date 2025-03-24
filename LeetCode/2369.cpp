#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validPartition(vector<int>& nums)
    {
        vector<int>dp(nums.size(), -1);
        return dfs(nums,0, dp);
    }
private:
    bool dfs(vector<int>& nums, int i, vector<int>& dp)
    {
        cout<<i<<" i\n";
        if(i>=nums.size())
            return true;
        if(dp[i]!=-1)
            return dp[i];
        int res = 0;
        if(i+1<nums.size() and nums[i]==nums[i+1])
            res = dfs(nums, i+2, dp);
        if(i+2<nums.size() and ((nums[i+1]+1 == nums[i+2] and nums[i]+1==nums[i+1]) or (nums[i+1] == nums[i+2] and nums[i]==nums[i+1])))
            res = res or dfs(nums, i+3, dp);
        dp[i] = res;

        return dp[i];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {4,4,4,4,5,6};
    cout<<obj.validPartition(vec);
}

