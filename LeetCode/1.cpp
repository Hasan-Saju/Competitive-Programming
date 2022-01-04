#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {

        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
//                    cout<<i<<" "<<j<<"\n";
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>nums = {2,7,11,15};
    int target = 9;
    obj.twoSum(nums,target);
}
