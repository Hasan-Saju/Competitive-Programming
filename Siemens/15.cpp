#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 and nums[i]==nums[i-1])
                continue;

            int l=i+1;
            int r=nums.size()-1;

            while(l<r)
            {
                int total = nums[i]+nums[l]+nums[r];
                if(total>0)
                    r--;
                else if(total<0)
                    l++;
                else
                {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;

                    while(l<nums.size() and nums[l]==nums[l-1])
                        l++;
                }

            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.threeSum(vec);
}

