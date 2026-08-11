#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int>& nums)
    {
        vector<int>dp(nums.size(),99999);

        int sz = nums.size();
        dp[sz-1]=1;

        for(int i=sz-1; i>=0; i--)
        {
            for(int j=i; j<sz and j<=i+nums[i]; j++)
                if(dp[j])
                    dp[i] = min(1+dp[j], dp[i]);
        }
        return dp[0]-1;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,1,1,4};
    cout<<obj.jump(vec);
}

