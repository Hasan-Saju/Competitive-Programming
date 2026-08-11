#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximizeCash(int i, int endd, vector<int>& dp, vector<int>& nums)
    {
        if(i>=endd)
            return 0;
        else if(dp[i]!=-1)
            return dp[i];

        return dp[i] = max( nums[i] + maximizeCash(i+2, endd, dp, nums),
                            maximizeCash(i+1, endd, dp, nums) );
    }
    int rob(vector<int>& nums)
    {
        if(nums.size()==1)
            return nums[0];
        vector<int>dp1(nums.size()+5, -1);
        vector<int>dp2(nums.size()+5, -1);

        return max( maximizeCash(0, nums.size()-1, dp1, nums),
                    maximizeCash(1, nums.size(), dp2, nums) );
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    cout<<obj.rob(vec);
}

