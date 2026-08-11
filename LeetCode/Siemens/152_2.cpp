#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int ans = nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            int stMax = curMax;
            curMax = max({ nums[i], stMax*nums[i], curMin*nums[i]  });
            curMin = min({ nums[i], stMax*nums[i], curMin*nums[i] });

            ans = max(ans, curMax);
            //cout<<ans<<" ";
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,-2,4};
    cout<<obj.maxProduct(vec);
}

