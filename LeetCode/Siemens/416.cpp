#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    bool equalSum(int i, int target, vector<int>& nums)
    {
        if(target==0)
            return true;
        if(target<0)
            return false;
        if(i>=nums.size()-1)  //make it sure, that it can be partitioned in two parts
            return false;
        if(dp[i][target]!=-1)
            return dp[i][target];

        return dp[i][target] = equalSum(i+1, target-nums[i], nums) || equalSum(i+1, target, nums);
    }
    bool canPartition(vector<int>& nums)
    {
        int total=0;
        for(auto x:nums)
            total+=x;

        dp.assign(nums.size()+5, vector<int>( (total/2) +5, -1));
        if(total%2)
            return false;

        return equalSum(0, total/2, nums);

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,5};
    cout<<obj.canPartition(vec);
}

