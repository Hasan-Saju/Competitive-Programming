#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int>& nums)
    {
        vector<int>dp(nums.size(),0);
        int sz = nums.size()-1;
        dp[sz] = 0;

        for(int i = sz-1; i>=0; i--)
        {
            int x =  i+nums[i];
            if(x>=sz)
                dp[i] = 1;
            else
            {
                int mn=INT_MAX-100;
                for(int j=i+1; j<=x; j++)
                    mn = min(mn, dp[j]);

                dp[i] = mn+1;

            }
        }

        return dp[0];
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,3,1,1,4};
    cout<<obj.jump(vec);
}

