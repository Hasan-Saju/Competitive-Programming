#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    int lis(int i, int prevInd, vector<int>& nums)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i][prevInd+1]!=-1)
            return dp[i][prevInd+1];

        int skip = lis(i+1, prevInd, nums);

        int res = 0;
        if(prevInd==-1 ||  nums[i]>nums[prevInd])
            res = 1 + lis(i+1, i, nums);

        return dp[i][prevInd+1] = max(skip, res);
    }
    int lengthOfLIS(vector<int>& nums)
    {
        dp.assign(nums.size()+5, vector<int>(nums.size()+5, -1));
        return lis(0, -1, nums);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {0,1,0,3,2,3};
    cout<<obj.lengthOfLIS(vec);
}

