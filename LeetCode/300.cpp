#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int lengthOfLIS(vector<int>& nums)
    {
        vector<int>dp(nums.size(),1);
        int ans = INT_MIN;

        for(int i=nums.size()-1; i>=0; i--)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]>nums[i])
                    dp[i] = max(dp[i], 1+dp[j]);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {7,7,7,7,7,7};
    cout<<obj.lengthOfLIS(vec);
}

