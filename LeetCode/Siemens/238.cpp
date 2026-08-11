#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>ans(nums.size(),0);

        for(int i=0; i<nums.size(); i++)
            ans[i] = nums[i];

        for(int i=nums.size()-2; i>=0; i--)
        {
            ans[i] = ans[i]*ans[i+1];
        }

        int run=nums[0];
        ans[0] = ans[1];
        for(int i=1; i<nums.size()-1; i++)
        {
            ans[i] = ans[i+1] * run;
            run = run*nums[i];

            cout<<ans[i]<<" ";
        }
        ans[nums.size()-1] = run;

        return ans;
    }
};

//1  2  3  4
//1  2  6  24 run
//24 24 12 4 ans

int main()
{
    Solution obj;
    vector<int>vec = {-1,1,0,-3, 3};
    obj.productExceptSelf(vec);
}
