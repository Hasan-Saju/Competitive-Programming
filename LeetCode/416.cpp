#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[201][20007];
    int recurse(vector<int>& nums, int i, int target, int current)
    {
        if(i>=nums.size())
            return INT_MAX-1;
        if(target == current)
            return 0;
        if(dp[i][current]!=0)
            return dp[i][current];

        int t1 = 1 + recurse(nums, i+1, target, current+nums[i]);
        int t2 = recurse(nums, i+1, target, current);

        return dp[i][current] = min(t1, t2);
    }
    bool canPartition(vector<int>& nums)
    {
        int total = 0;
        for(auto x:nums)
        {
            total += x;
        }

        if(total%2)
            return false;
        else
        {
            int ans = recurse(nums, 0, total/2, 0);
            //cout<<ans<<"\n";
            if(ans>0 and ans<nums.size())return true;
            else return false;
        }

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1};
    cout<<obj.canPartition(vec);
}

