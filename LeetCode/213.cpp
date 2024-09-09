#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calculateMoney(vector<int>& nums, int ind, vector<int>& dp, int siz)
    {
        if(ind >= siz)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];

        return dp[ind] = max(nums[ind] + calculateMoney(nums, ind+2, dp, siz),
                             calculateMoney(nums, ind+1, dp, siz));
    }
    int rob(vector<int>& nums)
    {

        if(nums.size()==1)
            return nums[0];

        vector<int>dp1(nums.size(), -1);
        vector<int>dp2(nums.size(), -1);
        return max(calculateMoney(nums, 1, dp1, nums.size()),
                   calculateMoney(nums, 0, dp2, nums.size()-1));
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1};
    cout<<obj.rob(vec);
}

