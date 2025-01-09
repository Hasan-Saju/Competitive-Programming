#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int left = 0;
        int right = 0;
        int currentSum=0;
        int ans = INT_MAX;
        for(; right<nums.size(); right++)
        {
            if(currentSum<target)
                currentSum+=nums[right];

            while(currentSum>=target)
            {
                ans = min(ans, right-left+1);
                currentSum-=nums[left];
                left++;
            }
        }
        return ans==INT_MAX? 0:ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,1,2,4,3};
    cout<<obj.minSubArrayLen(7, vec);
}

