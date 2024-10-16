#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int> >result;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 and nums[i]==nums[i-1])
                continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l<r)
            {
                int threeSum = nums[i] + nums[l] + nums[r];
                if(threeSum>0)
                    r--;
                else if(threeSum<0)
                    l++;
                else
                    result.push_back({nums[i], nums[l], nums[r]});
            }
        }

        return result;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.threeSum(1, 2147483647);
}

