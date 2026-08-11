#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>ans(nums.size());
        ans[0] = nums[0];
        for(int i=1; i<nums.size(); i++)
            ans[i] = ans[i-1]*nums[i];

        int last = ans.size()-1;
        ans[last] = ans[last-1];
        int product = nums[last];

        for(int i=last-1; i>0; i--)
        {
            ans[i] = ans[i-1]*product;
            product*=nums[i];
        }
        ans[0]= product;

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4};
    obj.productExceptSelf(vec);
}
