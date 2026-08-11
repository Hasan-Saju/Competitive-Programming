#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        vector<int>dp(nums.size(), 0);

        int sz = nums.size()-1;

        dp[sz]=1;
        for(int i=sz-1; i>=0; i--)
        {
            for(int j=i; j<=i+nums[i] and j<nums.size(); j++)
                if(dp[j])
                    dp[i]=1;
        }
        return dp[0];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {0,2,3};
    cout<<obj.canJump(vec);
}

