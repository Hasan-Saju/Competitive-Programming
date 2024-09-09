#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int amount(vector<int>&nums, int ind, vector<int>&dp)
    {
        if(ind>=nums.size())
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];

        return dp[ind] = max(nums[ind] + amount(nums, ind+2, dp),
                             amount(nums, ind+1, dp));
    }

    int rob(vector<int>& nums)
    {
        vector<int>dp(nums.size(), -1);
        return amount(nums, 0, dp);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,9,3,1};
    cout<<obj.rob(vec);
}

