#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    int recursion(int i, int prev, vector<int>& nums)
    {
        if(i==nums.size())
            return 0;

        if(dp[i][prev+1] != -1)
            return dp[i][prev+1];

        int skip = recursion(i+1, prev, nums);

        int take=0;
        if(prev==-1 || nums[i]>nums[prev])
            take = 1 + recursion(i+1, i, nums);

        return dp[i][prev+1] = max(take, skip);

    }
    int lengthOfLIS(vector<int>& nums)
    {
        dp.assign(nums.size()+1, vector<int>(nums.size()+1, -1));
        return recursion(0, -1, nums);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {10,9,2,5,3,7,101,18};
    cout<<obj.lengthOfLIS(vec);
}
