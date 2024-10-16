#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {

        int diff = INT_MAX;
        int ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++)
        {
            int l = i+1;
            int r = nums.size()-1;

            while(l<r)
            {
                int threeSum = nums[i] + nums[l] + nums[r];
                if(diff > abs(target-threeSum))
                    ans = threeSum, diff = abs(target-threeSum);

                if(threeSum>target)
                    r--;
                else if(target>threeSum)
                    l++;
                else
                {
                    ans = threeSum;
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,0};
    cout<<obj.threeSumClosest(vec,-100);
}

