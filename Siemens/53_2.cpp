#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curEnd = nums[0];
        int ans = nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            curEnd = max(curEnd+nums[i], nums[i]);
            ans = max(ans, curEnd);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.maxSubArray(vec);
}
