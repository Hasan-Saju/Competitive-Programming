#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNumberOfLIS(vector<int>& nums)
    {
        unordered_map<int, pair<int, int>>dp;
        int LisLength = 0, LisCount = 0;
        for(int i=nums.size()-1; i>=0; i--)
        {
            int maxLength = 1, maxCount = 1;
            for(int j=i+1; j<nums.size(); j++)
            {
                auto [len, cnt] = dp[j];
                if(nums[j]>nums[i])
                {
                    if(len+1>maxLength)
                    {
                        maxLength = len+1;
                        maxCount = cnt;
                    }
                    else if(len+1==maxLength)
                        maxCount += cnt;
                }
            }

            dp[i] = {maxLength, maxCount};
            if(maxLength>LisLength)
            {
                LisLength = maxLength;
                LisCount = maxCount;
            }
            else if(LisLength==maxLength)
                LisCount += maxCount;
        }

        return LisCount;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,5,4,7};
    cout<<obj.findNumberOfLIS(vec);
}

