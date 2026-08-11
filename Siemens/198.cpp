#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int>dp;
    int maxRob(int i, vector<int>& nums)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];

        return dp[i] = max(nums[i] + maxRob(i+2, nums), maxRob(i+1, nums));
    }

    int rob(vector<int>& nums)
    {
        dp.assign(nums.size()+5, -1);

        maxRob(0, nums);

        //for(int i=0; i<nums.size(); i++)
            //cout<<nums[i]<<" ";

        return dp[0];
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,1};
    cout<<obj.rob(vec);
}

